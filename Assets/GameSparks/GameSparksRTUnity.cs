using UnityEngine;
using System;
using System.IO;
using System.Text;
using System.Collections.Generic;
using GameSparks.Api.Responses;
using GameSparks.Api.Messages;
using GameSparks.RT;

#if UNITY_WEBGL && !UNITY_EDITOR
using SimpleJson2;
using System.Runtime.InteropServices;

public class GameSparksRTUnity : MonoBehaviour {

	bool ignoreEvent = false;
	int currSessionId = 0;
	static int lastSessionId = 0;
#else
public class GameSparksRTUnity : MonoBehaviour, IRTSessionListener {
	
	IRTSession session;
#endif
	Action<int> m_OnPlayerConnect;
	Action<int> m_OnPlayerDisconnect;
	Action<bool> m_OnReady;
	Action<RTPacket> m_OnPacket;

	// Static singleton instance
	private static GameSparksRTUnity instance;
	
	// Static singleton property
	public static GameSparksRTUnity Instance { 
		get { 
			if(instance == null) {
				instance = new GameObject("GameSparksRTUnity").AddComponent<GameSparksRTUnity>();
				DontDestroyOnLoad(instance.gameObject);
			}
			return instance; 
		}
		private set { 
			if(instance != null && instance != value)
			{
				Destroy(instance.gameObject);
			}
			instance = value;
		} 
	}

	void Awake()
	{
		instance = this;
		DontDestroyOnLoad(gameObject);
	}

	//Configure the SDK with a MatchFoundMessage
	public void Configure(MatchFoundMessage message, 
	                      Action<int> OnPlayerConnect,
	                      Action<int> OnPlayerDisconnect,
	                      Action<bool> OnReady,
	                      Action<RTPacket> OnPacket){
		
		if(!message.Port.HasValue){
			Debug.Log("Response does not contain a port, exiting.");
			return;
		}
		
		Configure(message.Host,
		          message.Port.Value,
		          message.AccessToken, 
		          OnPlayerConnect,
		          OnPlayerDisconnect,
		          OnReady, 
		          OnPacket);
	}

	//Configure the SDK with a FindMatchResponse
	public void Configure(FindMatchResponse response, 
	                      Action<int> OnPlayerConnect,
	                      Action<int> OnPlayerDisconnect,
	                      Action<bool> OnReady,
	                      Action<RTPacket> OnPacket){

		if(!response.Port.HasValue){
			Debug.Log("Response does not contain a port, exiting.");
			return;
		}

		Configure(response.Host,
		          response.Port.Value,
		          response.AccessToken, 
		          OnPlayerConnect,
		          OnPlayerDisconnect,
		          OnReady, 
		          OnPacket);
	}

	//Configure the SDK manually
	public void Configure(string host, 
	                      int port,
	                      string accessToken,
               Action<int> OnPlayerConnect,
               Action<int> OnPlayerDisconnect,
               Action<bool> OnReady,
               Action<RTPacket> OnPacket){

		m_OnPlayerConnect = OnPlayerConnect;
		m_OnPlayerDisconnect = OnPlayerDisconnect;
		m_OnReady = OnReady;
		m_OnPacket = OnPacket;

#if UNITY_WEBGL && !UNITY_EDITOR
		lastSessionId ++;

		currSessionId = lastSessionId;

		GSCreateRTSession(instance.name, currSessionId, accessToken, host, port);
#else	
		if(session != null){
			session.Stop();
		}

		session = GameSparksRT
			.SessionBuilder()
				.SetHost(host)
				.SetPort(port)
				.SetConnectToken(accessToken)
				.SetListener(this)
	#if UNITY_XBOXONE && !UNITY_EDITOR
				.UseOnlyWebSockets(true)
	#endif
				.Build();
#endif		
	}

	//Connect to the realtime servers
	public void Connect(){
#if UNITY_WEBGL && !UNITY_EDITOR
		GSStartRTSession(currSessionId);
#else
		if(session != null){
			Debug.Log("Starting Session");
			session.Start();
		} else {
			Debug.Log("Cannot start Session");
		}
#endif
	}

	//Disconnect from the realtime servers
	public void Disconnect(){
#if UNITY_WEBGL && !UNITY_EDITOR
		GSStopRTSession(currSessionId);
#else
		if(session != null){
			session.Stop();
		}
#endif
	}

	//The current sessions PeerId
	public int? PeerId{
		get 
		{
#if UNITY_WEBGL && !UNITY_EDITOR
			return GSGetPeerId(currSessionId);
#else
			if(session != null)
				return session.PeerId;
			return null;
#endif
		}
	}

	//The list of active peers in the session
	public List<int> ActivePeers{
		get 
		{
#if UNITY_WEBGL && !UNITY_EDITOR
			try {
				int a = 0;
				int[] peers;
				JsonArray o = (JsonArray)SimpleJson2.SimpleJson2.DeserializeObject(GSGetActivePeers(currSessionId));

				peers = new int[o.Count];

				foreach (object val in o.ToArray()) {
					peers[a ++] = Convert.ToInt32(val);
				}

				return new List<int>(peers);
			} catch (Exception) {
				return null;
			}
#else
			if(session != null)
				return session.ActivePeers;
			return null;
#endif
		}
	}

	//Whether the SDK is ready for sending and recieving data
	public bool Ready{ 
	get 
		{
#if UNITY_WEBGL && !UNITY_EDITOR
			return GSIsRTSessionReady(currSessionId);
#else
			return(session != null && session.Ready);
#endif
		}
	}

	//The method to use to send data to a session.
	public int SendData (int opCode, 
	                      GameSparksRT.DeliveryIntent deliveryIntent, 
						  RTData structuredData, 
	                      params int[] targetPlayers){
#if UNITY_WEBGL && !UNITY_EDITOR
		return SendRTDataAndBytes(opCode, deliveryIntent, new ArraySegment<byte>(), structuredData, targetPlayers);
#else
		if(session != null){
			return session.SendRTData(opCode, deliveryIntent, structuredData, targetPlayers);
		}
		return -1;
#endif
	}

	//The method to use to send data to a session.
	public int SendBytes (int opCode, 
		GameSparksRT.DeliveryIntent deliveryIntent, 
		ArraySegment<byte> unstructuredData, 
		params int[] targetPlayers){
#if UNITY_WEBGL && !UNITY_EDITOR
		return SendRTDataAndBytes(opCode, deliveryIntent, unstructuredData, null, targetPlayers);
#else
		if(session != null){
			return session.SendBytes(opCode, deliveryIntent, unstructuredData, targetPlayers);
		}
		return -1;
#endif
	}

	//The method to use to send data to a session.
	public int SendRTDataAndBytes (int opCode, 
		GameSparksRT.DeliveryIntent deliveryIntent, 
		ArraySegment<byte> unstructuredData, 
		RTData structuredData,
		params int[] targetPlayers){
#if UNITY_WEBGL && !UNITY_EDITOR
		string payloadString = "";
		string dataJson = "";
		string targetPlayersJson = "";

		if (unstructuredData.Count > 0) {
			payloadString = System.Text.Encoding.UTF8.GetString(unstructuredData.Array, 0, unstructuredData.Array.Length);
		}

		if (structuredData != null) {
			JsonObject o = CreateObjectData(structuredData);

			dataJson = o.ToString();

			//Debug.Log(dataJson);
		}

		if (targetPlayers != null) {
			JsonArray a = new JsonArray(targetPlayers.Length);

			for (int i = 0; i < targetPlayers.Length; i ++) {
				a.Add(targetPlayers[i]);
			}

			targetPlayersJson = a.ToString();
		}

		return GSSendRTDataAndBytes(currSessionId, opCode, (int)deliveryIntent, payloadString, dataJson, targetPlayersJson);
#else
		if(session != null){
			return session.SendRTDataAndBytes(opCode, deliveryIntent, unstructuredData, structuredData, targetPlayers);
		}
		return -1;
#endif
	}

	void OnDestroy() {
#if UNITY_WEBGL && !UNITY_EDITOR
		GSCleanUpRTSessions();
#else
		Disconnect();
#endif
	}

	void Update () {
#if UNITY_WEBGL && !UNITY_EDITOR
		GSUpdateRTSession(currSessionId);
#else
		if(session != null) {
			session.Update();
		}
#endif
	}

#if UNITY_WEBGL && !UNITY_EDITOR
	public void SetSessionId (int id)
	{
		if (currSessionId == id) {
			ignoreEvent = false;
		} else {
			ignoreEvent = true;
		}
	}

	public void OnPlayerConnect (int peerId)
	{
		if (!ignoreEvent && m_OnPlayerConnect != null) {
			m_OnPlayerConnect(peerId);
		}
	}

	public void OnPlayerDisconnect (int peerId)
	{
		if (!ignoreEvent && m_OnPlayerDisconnect != null) {
			m_OnPlayerDisconnect(peerId);
		}
	}

	public void OnReady (int ready)
	{
		if (!ignoreEvent && m_OnReady != null) {
			if (ready == 1) {
				m_OnReady (true);
			} else {
				m_OnReady (false);
			}
		}
	}

	private string DecodeFromUtf8(string utf8String)
	{
		// copy the string as UTF-8 bytes.
		byte[] utf8Bytes = new byte[utf8String.Length];

		for (int i = 0; i < utf8String.Length; i ++) {
			//Debug.Assert( 0 <= utf8String[i] && utf8String[i] <= 255, "the char must be in byte's range");
			utf8Bytes[i] = (byte)utf8String[i];
		}

		return Encoding.UTF8.GetString(utf8Bytes, 0, utf8Bytes.Length);
	}

	public void OnPacket (string packet) {
		if (!ignoreEvent && m_OnPacket != null) {
			packet = DecodeFromUtf8 (packet);

			JsonObject o = (JsonObject)SimpleJson2.SimpleJson2.DeserializeObject (packet);
			int opCode = Convert.ToInt32 (o ["opCode"]);
			int sender = Convert.ToInt32 (o ["sender"]);
			int limit = Convert.ToInt32 (o ["streamLength"]);
			int packetSize = Convert.ToInt32 (o ["packetSize"]);
			JsonObject data = (JsonObject)o ["data"];
			RTData data2 = DeserializeData (data);
			JsonObject stream = (JsonObject)o ["stream"];
			LimitedPositionStream limitedStream = null;

			if (stream != null) {
				limitedStream = new LimitedPositionStream (Encoding.UTF8.GetBytes ((string)((JsonObject)stream ["stream"]) ["buffer"]),
					Convert.ToInt32 (stream ["limit"]));
			}

			RTPacket packet2 = new RTPacket (opCode, sender, limitedStream, limit, data2, packetSize);

			m_OnPacket (packet2);
		}
	}

	private RTData DeserializeData(JsonObject obj) {
		RTData data = null;
		JsonArray obj2;

		if (obj != null) {
			data = new RTData ();

			obj2 = (JsonArray)obj ["data"];

			for (uint a = 0; a < obj2.Count; a++) {
				JsonObject item = (JsonObject)obj2 [(int)a];

				if (item != null) {
					if (item.ContainsKey("int_val") && item ["int_val"] != null) {
						data.SetInt(a, Convert.ToInt32(item["int_val"]));
					} else if (item.ContainsKey("long_val") && item ["long_val"] != null) {
						data.SetLong(a, Convert.ToInt64(item["long_val"]));
					} else if (item.ContainsKey("float_val") && item ["float_val"] != null) {
						data.SetFloat(a, Convert.ToSingle(item["float_val"]));
					} else if (item.ContainsKey("double_val") && item ["double_val"] != null) {
						data.SetDouble(a, Convert.ToDouble(item["double_val"]));
					} else if (item.ContainsKey("data_val") && item ["data_val"] != null) {
						data.SetData(a, DeserializeData((JsonObject)item["data_val"]));
					} else if (item.ContainsKey("string_val") && item ["string_val"] != null) {
						data.SetString (a, (string)item ["string_val"]);
					} else if (item.ContainsKey("vec_val") && item ["vec_val"] != null) {
						if (((JsonObject)item ["vec_val"]).ContainsKey("w")) {
							data.SetRTVector (a, new RTVector (
								Convert.ToSingle (((JsonObject)item ["vec_val"]) ["x"]), 
								Convert.ToSingle (((JsonObject)item ["vec_val"]) ["y"]),
								Convert.ToSingle (((JsonObject)item ["vec_val"]) ["z"]),
								Convert.ToSingle (((JsonObject)item ["vec_val"]) ["w"])));
						} else if (((JsonObject)item ["vec_val"]).ContainsKey("z")) {
							data.SetRTVector (a, new RTVector (
								Convert.ToSingle (((JsonObject)item ["vec_val"]) ["x"]), 
								Convert.ToSingle (((JsonObject)item ["vec_val"]) ["y"]),
								Convert.ToSingle (((JsonObject)item ["vec_val"]) ["z"])));
						} else {
							data.SetRTVector (a, new RTVector (
								Convert.ToSingle (((JsonObject)item ["vec_val"]) ["x"]), 
								Convert.ToSingle (((JsonObject)item ["vec_val"]) ["y"])));
						}
					}
				}
			}
		}

		return data;
	}
#else
	public void OnPlayerConnect (int peerId){
		if(m_OnPlayerConnect != null){
			m_OnPlayerConnect(peerId);
		}
	}
	
	public void OnPlayerDisconnect (int peerId){
		if(m_OnPlayerDisconnect != null){
			m_OnPlayerDisconnect(peerId);
		}
	}
	
	public void OnReady (bool ready){
		if(m_OnReady != null) {
			m_OnReady(ready);
		}
	}

	public void OnPacket (RTPacket packet){
		if(m_OnPacket != null) {
			m_OnPacket(packet);
		}
	}
#endif

#if UNITY_WEBGL && !UNITY_EDITOR
	private int GetNumItemsData(RTData data)
	{
		int numItems = 0;

		if (data != null) {
			for (int i = GameSparksRT.MAX_RTDATA_SLOTS - 1; i >= 0 ; i --) {
				if (data.GetInt ((uint)i) != null || data.GetLong ((uint)i) != null || data.GetFloat ((uint)i) != null ||
					data.GetDouble ((uint)i) != null || data.GetRTVector ((uint)i) != null || data.GetString ((uint)i) != null ||
					data.GetData ((uint)i) != null) {
					numItems = i + 1;

					break;
				}
			}
		}

		return numItems;
	}

	private JsonObject CreateObjectData(RTData data)
	{
		if (data == null) {
			return null;
		}

		int numItems = GetNumItemsData(data);
		JsonObject o = new JsonObject ();

		if (numItems > 0) {
			JsonArray a = new JsonArray (numItems);

			for (uint i = 0; i < numItems; i++) {
				JsonObject o2 = new JsonObject ();

				if (data.GetLong (i) != null) {
					o2.Add ("long_val", data.GetLong (i).Value);
				} else {
					o2.Add ("long_val", null);
				}
				if (data.GetFloat (i) != null) {
					o2.Add ("float_val", data.GetFloat (i).Value);
				} else {
					o2.Add ("float_val", null);
				}
				if (data.GetDouble (i) != null) {
					o2.Add ("double_val", data.GetDouble (i).Value);
				} else {
					o2.Add ("double_val", null);
				}
				if (data.GetRTVector (i) != null) {
					RTVector vec = data.GetRTVector (i).Value;
					JsonObject o3 = new JsonObject ();

					o3.Add ("x", vec.x.Value);
					o3.Add ("y", vec.y.Value);
					if (vec.z != null) {
						o3.Add ("z", vec.z.Value);

						if (vec.w != null) {
							o3.Add ("w", vec.w.Value);
						}
					}

					o2.Add ("vec_val", o3);
				} else {
					o2.Add ("vec_val", null);
				}
				if (data.GetString (i) != null) {
					o2.Add ("string_val", data.GetString (i));
				} else {
					o2.Add ("string_val", null);
				}
				if (data.GetData (i) != null) {
					o2.Add ("data_val", CreateObjectData (data.GetData (i)));
				} else {
					o2.Add ("data_val", null);
				}

				if (o2.Count == 0) {
					a.Add (null);
				} else {
					a.Add (o2);
				}
			}

			o.Add ("data", a);
		} else {
			o.Add ("data", null);
		}

		return o;
	}

	[DllImport("__Internal")]
	private static extern bool GSCreateRTSession(string name, int sessionId, string connectToken, string hostName, int tcpPort);

	[DllImport("__Internal")]
	private static extern bool GSStartRTSession (int sessionId);

	[DllImport("__Internal")]
	private static extern bool GSStopRTSession (int sessionId);

	[DllImport("__Internal")]
	private static extern void GSCleanUpRTSessions();

	[DllImport("__Internal")]
	private static extern bool GSUpdateRTSession (int sessionId);

	[DllImport("__Internal")]
	private static extern int GSGetPeerId (int sessionId);

	[DllImport("__Internal")]
	private static extern string GSGetActivePeers (int sessionId);

	[DllImport("__Internal")]
	private static extern bool GSIsRTSessionReady (int sessionId);

	[DllImport("__Internal")]
	private static extern int GSSendRTDataAndBytes (int sessionId, int opCode, int intent, string payload, string dataJson, string targetPlayersJson);
#endif
}

public static class RTDataExtensions
{
	
	public static RTData SetVector2(this RTData data, uint index, Vector2 vector2){
		data.SetRTVector(index, new RTVector(vector2.x, vector2.y));
		return data;
	}

	public static Vector2? GetVector2(this RTData data, uint index){
		if(data.GetRTVector(index) != null){
			RTVector vector = data.GetRTVector(index).Value;
			return new Vector2(vector.x.Value, vector.y.Value);
		}
		return null;
	}

	public static RTData SetVector3(this RTData data, uint index, Vector3 vector3){
		data.SetRTVector(index, new RTVector(vector3.x, vector3.y, vector3.z));
		return data;
	}

	public static Vector3? GetVector3(this RTData data, uint index){
		if(data.GetRTVector(index) != null){
			RTVector vector = data.GetRTVector(index).Value;
			if(!vector.z.HasValue){
				return null;
			}
			return new Vector3(vector.x.Value, vector.y.Value, vector.z.Value);
		}
		return null;
	}

	public static RTData SetVector4(this RTData data, uint index, Vector4 vector4){
		data.SetRTVector(index, new RTVector(vector4.x, vector4.y, vector4.z, vector4.w));
		return data;
	}

	public static Vector4? GetVector4(this RTData data, uint index){
		if(data.GetRTVector(index) != null){
			RTVector vector = data.GetRTVector(index).Value;
			if(!vector.w.HasValue){
				return null;
			}
			return new Vector4(vector.x.Value, vector.y.Value, vector.z.Value, vector.w.Value);
		}
		return null;
	}
}

#if UNITY_WEBGL && !UNITY_EDITOR
internal class LimitedPositionStream : Stream
{
	public int BytesRead { get; private set; }

	private byte[] readByte = new byte[1];
	private byte[] buffer;
	private long limit;

	public LimitedPositionStream(byte[] buffer, long limit) {
		BytesRead = 0;

		this.buffer = buffer;
		this.limit = limit;
	}

	public override int Read(byte[] buffer, int offset, int count)
	{
		int toRead = (count > limit - BytesRead) ? (int)(limit - BytesRead) : count;

		try {
			Array.Copy (this.buffer, BytesRead, buffer, 0, toRead);
		} catch (Exception) {
			return 0;
		}

		BytesRead += toRead;

		return count;
	}

	public override int ReadByte()
	{
		if (Read(readByte, 0, 1) == 1) {
			return readByte [0];
		}

		return -1;
	}

	public override void Flush()
	{
		throw new NotImplementedException();
	}

	public override long Seek(long offset, SeekOrigin origin)
	{
		for (int i = 0; i < offset; i++) {
			ReadByte ();
		}
		return BytesRead;
	}

	public override void SetLength(long value)
	{
		throw new NotImplementedException();
	}

	public override void Write(byte[] buffer, int offset, int count)
	{
		throw new NotImplementedException();
	}

	public override bool CanRead
	{
		get
		{
			return true;
		}
	}

	public override bool CanSeek
	{
		get
		{
			return false;
		}
	}

	public override bool CanWrite
	{
		get
		{
			return false;
		}
	}

	public override long Length
	{
		get
		{
			return buffer.Length;
		}
	}

	public override long Position
	{
		get
		{
			return this.BytesRead;
		}
		set
		{
			throw new NotImplementedException();
		}
	}

	public override void Close()
	{
		base.Close();
	}

	protected override void Dispose(bool disposing)
	{
		base.Dispose(disposing);
	}
}
#endif