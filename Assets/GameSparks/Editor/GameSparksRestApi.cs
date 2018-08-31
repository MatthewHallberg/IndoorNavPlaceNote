using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using System;
using System.IO;
using System.Net;
using System.Threading;
using System.Text.RegularExpressions;

namespace GameSparks.Editor
{
    /// <summary>
    /// Provides access to the rest API of the GameSparks backend. Can be used in the editor only. 
    /// </summary>
    public class GameSparksRestApi {

		private static string HOST = "https://config2.gamesparks.net/restv2/game/";
		private static string HOST2 = "http://repo.gamesparks.net/unity-sdk/";

    	static GameSparksRestApi() {
    		System.Net.ServicePointManager.ServerCertificateValidationCallback +=
    			delegate(object sender, System.Security.Cryptography.X509Certificates.X509Certificate certificate,
    			         System.Security.Cryptography.X509Certificates.X509Chain chain,
    			         System.Net.Security.SslPolicyErrors sslPolicyErrors)
    		{
    			return true; // **** Always accept
    		};
    	}

    	public static String getDownloadable(string apiKey, string username, string password, string shortCode){
			string url = HOST + apiKey + "/config/~downloadables/" + shortCode + "/file";
    		WebClient wc = new WebClient();
    		NetworkCredential myCreds = new NetworkCredential(username, password);
    		wc.Credentials = myCreds;
    		String ret = null;
    		try{
    			ret = wc.DownloadString(url);
    		}catch(WebException we){
    			ret = "{\"responseCode\":-1,\"errorMessage\":\"" + we.Message + "\"}";
    		}
    		return ret;
    	}

    	public static String setDownloadable(string apiKey, string username, string password, string shortCode, string fileName){
			string url = HOST + apiKey + "/config/~downloadables/" + shortCode + "/file";
    		String ret = null;
			string extension = Path.GetExtension (shortCode);
			if (extension != null && extension.Length > 0) {
				ret = "{\"responseCode\":-1,\"errorMessage\":\"No extension permitted\"}";
			} else {
				try {
					ret = GameSparksEditorFormUpload.UploadFile (url, fileName, username, password);
				} catch (WebException we) {
					ret = "{\"responseCode\":-1,\"errorMessage\":\"" + we.Message + "\"}";
				}
			}
    		return ret;
    	}

    	public static String getApi(){
    		string url = HOST + GameSparksSettings.ApiKey + "/sdk/" + GameSparksSettings.ApiSecret + "/GameSparksCustomSDK501.cs";
    		Debug.Log(url);
    		WebClient wc = new WebClient();
    		String ret = null;
    		try{
    			ret = wc.DownloadString(url);
    		}catch(Exception e){
    			Debug.Log(e.ToString());

    		}
    		return ret;
    	}

		public static string GetLastVersion()
		{
			string url = HOST2 + "latest.json";

			//Debug.Log(url);

			WebClient wc = new WebClient();

			try
			{
				String data = wc.DownloadString(url);

				LatestJSON latest = JsonUtility.FromJson<LatestJSON>(data);

				return latest.version;
			}
			catch (Exception e)
			{
				Debug.Log(e.ToString());
			}

			return null;
		}

		public static Boolean CompareCurrentWithLastVersion(string current, string last)
		{
			char[] delimiterChars = {'.'};
			int[] current2 = {};
			int[] last2 = {};
			int numbers;

			try
			{
                current = Regex.Replace(current, "[^0-9.]", "");

                current2 = Array.ConvertAll(current.Split(delimiterChars), s => Convert.ToInt32(s));
			}
			catch {
			}

			try
			{
                last = Regex.Replace(last, "[^0-9.]", "");

                last2 = Array.ConvertAll(last.Split(delimiterChars), s => Convert.ToInt32(s));
			}
			catch {
			}

			numbers = current2.Length;

			if (last2.Length < numbers) {
				numbers = last2.Length;
			}

            for (int a = 0; a < numbers; a++) {
                if (last2 [a] > current2 [a]) {
					return true;
				}
			}

			return false;
		}

		public static Boolean UpdateSDK(string version)
		{
			string url = HOST2 + "Gamesparks_Unity_" + version + ".unitypackage";

			//Debug.Log(url);

			WebClient wc = new WebClient();

			try
			{
				String tempSDK = FileUtil.GetUniqueTempPathInProject();

				wc.DownloadFile(url, tempSDK);

				AssetDatabase.ImportPackage(tempSDK, false);

				AssetDatabase.Refresh();

				return true;
			}
			catch (Exception e)
			{
				Debug.Log(e.ToString());
			}

			return false;
		}

		private class LatestJSON
		{
			public string version;
			public string changes;
			
			public LatestJSON()
            {
                version = null;
                changes = null;
            }
		}
    }
}
