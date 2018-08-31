using UnityEngine;
using System.Collections;
using System;
using GameSparks.Core;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace GameSparks.Platforms
{
	/// <summary>
	/// Websocket controller which can hold and update multiple websockets. 
	/// </summary>
    public class WebSocketController : MonoBehaviour
    {
		public string GSName { get; set; }

		private void Awake()
        {
			GSName = name;
		}

        #region socket collection

        List<IControlledWebSocket> webSockets = new List<IControlledWebSocket>();

        public void AddWebSocket(IControlledWebSocket socket)
        {
            webSockets.Add(socket);
            websocketCollectionModified = true;
        }

        public void RemoveWebSocket(IControlledWebSocket socket)
        {
            webSockets.Remove(socket);
            websocketCollectionModified = true;
        }

        IControlledWebSocket GetSocket(int socketId)
        {
            foreach (var socket in webSockets)
            {
                if(socket.SocketId == socketId)
                {
                    return socket;
                }
            }
			return null;
        }

        #endregion

        #region callbacks from external

        /// <summary>
        /// Receives json : {socketId: (INT)}
        /// </summary>
        public void GSSocketOnOpen(string data)
        {
            IDictionary<string, object> parsedJSON = (IDictionary<string, object>)GSJson.From(data);
            if(parsedJSON == null)
                throw new FormatException("parsed json was null. ");
            if (!parsedJSON.ContainsKey("socketId"))
                throw new FormatException();

            int socketId = System.Convert.ToInt32(parsedJSON ["socketId"]);
			IControlledWebSocket socket = GetSocket(socketId);
				
			if (socket != null)
			{
				socket.TriggerOnOpen();
			}
        }

        /// <summary>
        /// Receives json : {socketId: (INT)}
        /// </summary>
        /// <param name="data">Data.</param>
        public void GSSocketOnClose(string data)
        {
            IDictionary<string, object> parsedJSON = (IDictionary<string, object>)GSJson.From(data);
            int socketId = System.Convert.ToInt32( parsedJSON["socketId"] );
			IControlledWebSocket socket = GetSocket(socketId);

			if (socket != null)
			{
				socket.TriggerOnClose();
			}
        }

        /// <summary>
        /// Receives json : {socketId: (INT), message: (STRING)}
        /// </summary>
        /// <param name="data">Data.</param>
        public void GSSocketOnMessage(string data)
        {
            IDictionary<string, object> parsedJSON = (IDictionary<string, object>)GSJson.From(data);
            int socketId = System.Convert.ToInt32( parsedJSON["socketId"] );
			IControlledWebSocket socket = GetSocket(socketId);

			if (socket != null)
			{
				socket.TriggerOnMessage((string)parsedJSON["message"]);
			}
        }

        /// <summary>
        /// Receives json : {socketId: (INT), message: (STRING)}
        /// </summary>
        /// <param name="socketId">Socket identifier.</param>
        /// <param name="message">Message.</param>
        public void GSSocketOnError(string data)
        {
            IDictionary<string, object> parsedJSON = (IDictionary<string, object>)GSJson.From(data);
            int socketId = System.Convert.ToInt32( parsedJSON["socketId"] );
            string error = (string)parsedJSON["error"];
			IControlledWebSocket socket = GetSocket(socketId);

			if (socket != null)
			{
				socket.TriggerOnError(error);
			}
        }
        #endregion

		/// <summary>
		/// Used for WebGL Exports. This is called by Javascript to inject server-to-client communication into Unity. 
		/// </summary>
		public void ServerToClient(string jsonData)
		{
			var parsedJSON = GSJson.From(jsonData) as IDictionary<string, object>;
			
			int socketId = int.Parse(parsedJSON["socketId"].ToString());
			
			IControlledWebSocket socket = GetSocket(socketId);

			if(socket == null)
				return;

			string functionName = parsedJSON["functionName"].ToString();

			
			switch(functionName)
			{
			case "onError" : socket.TriggerOnError(parsedJSON["data"].ToString()); break;
			case "onMessage" : socket.TriggerOnMessage(parsedJSON["data"].ToString()); break;
			case "onOpen" : socket.TriggerOnOpen(); break;
			case "onClose" : socket.TriggerOnClose(); break;
			}
		}

        bool websocketCollectionModified = false;
        void Update()
        {
            websocketCollectionModified = false;
            foreach (var socket in webSockets)
            {
                socket.Update();
                if (websocketCollectionModified)
                    break;
            }
        }

    }
}