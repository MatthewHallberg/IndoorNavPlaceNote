using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using GameSparks;
using GameSparks.Api;
using GameSparks.Api.Messages;
using GameSparks.Api.Requests;
using GameSparks.Api.Responses;
using GameSparks.Core;

/// <summary>
/// Using the immediate mode Unity GUI this class allows for testing the 
/// connection to the GameSparks backend in the Unity Editor. 
/// </summary>
public class GameSparksTestUI : MonoBehaviour
{
	
	private Queue<string> myLogQueue = new Queue<string>();
	private string myLog = "";
	private string fbToken = "accessToken";
	private string dismissMessageId = "messageId";
	private const int itemHeight = 30;
	private const int itemWidth = 200;

	private Boolean testing;
	private Boolean working;
	private Boolean result;
	private int counter;
	private int numTest;

    public Texture cursor;

#if (UNITY_PS4 || UNITY_XBOXONE) && !UNITY_EDITOR 
    private const int numButtons = 16;
    private bool clickedButton = false;
    private int currSelectedButton = 0;
    private Rect rectClearLog = new Rect(0, 68, itemWidth, itemHeight);
    private Rect rectLogout = new Rect(0, 68 + itemHeight + 5, itemWidth, itemHeight);
    private Rect rectDisconnect = new Rect(0, 68 + (itemHeight + 5) * 2, itemWidth, itemHeight);
    private Rect rectDevAuthReq = new Rect(0, 68 + (itemHeight + 5) * 3, itemWidth, itemHeight);
    private Rect rectDurAccDetReq = new Rect(0, 68 + (itemHeight + 5) * 4, itemWidth, itemHeight);
    private Rect rectAccDetReq = new Rect(0, 68 + (itemHeight + 5) * 5, itemWidth, itemHeight);
    private Rect rectFbConnectReq = new Rect(0, 68 + (itemHeight + 5) * 6, itemWidth, itemHeight);
    private Rect rectListAchReq = new Rect(0, 68 + (itemHeight + 5) * 7, itemWidth, itemHeight);
    private Rect rectListGameFriendsReq = new Rect(0, 68 + (itemHeight + 5) * 8, itemWidth, itemHeight);
    private Rect rectListVirtGoodsReq = new Rect(0, 68 + (itemHeight + 5) * 9, itemWidth, itemHeight);
    private Rect rectListChalTypeReq = new Rect(0, 68 + (itemHeight + 5) * 10, itemWidth, itemHeight);
    private Rect rectAuthReq = new Rect(0, 68 + (itemHeight + 5) * 11, itemWidth, itemHeight);
    private Rect rectLeadData = new Rect(0, 68 + (itemHeight + 5) * 12, itemWidth, itemHeight);
    private Rect rectListMsgReq = new Rect(0, 68 + (itemHeight + 5) * 13, itemWidth, itemHeight);
    private Rect rectDismMsgReq = new Rect(0, 68 + (itemHeight + 5) * 14, itemWidth, itemHeight);
    private Rect rectTrace = new Rect(0, 68 + (itemHeight + 5) * 15, itemWidth, itemHeight);
    private static Texture2D rectNormalTexture;
    private static Texture2D rectClickedTexture;
    private static GUIStyle rectNormalStyle;
    private static GUIStyle rectClickedStyle;
#endif

    void Awake ()
	{
#if UNITY_5 || UNITY_5_3_OR_NEWER
        Application.logMessageReceivedThreaded += HandleLog;
        //Application.logMessageReceived += HandleLog;
#else
		Application.RegisterLogCallbackThreaded (HandleLog);
#endif
		Screen.orientation = ScreenOrientation.AutoRotation;
	}
	
	void Start(){
		GSMessageHandler._AllMessages = HandleGameSparksMessageReceived;

#if (UNITY_PS4 || UNITY_XBOXONE) && !UNITY_EDITOR 
        if (rectNormalTexture == null)
        {
            rectNormalTexture = new Texture2D(1, 1);
            rectNormalTexture.SetPixel(0, 0, new Color(1.0f, 0.25f, 0.1f, 0.5f));
            rectNormalTexture.Apply();
        }

        if (rectClickedTexture == null)
        {
            rectClickedTexture = new Texture2D(1, 1);
            rectClickedTexture.SetPixel(0, 0, new Color(1.0f, 0.8f, 0.25f, 0.65f));
            rectClickedTexture.Apply();
        }

        if (rectNormalStyle == null)
        {
            rectNormalStyle = new GUIStyle();
            rectNormalStyle.normal.background = rectNormalTexture;
        }

        if (rectClickedStyle == null)
        {
            rectClickedStyle = new GUIStyle();
            rectClickedStyle.normal.background = rectClickedTexture;
        }
#endif
    }
	
	void HandleGameSparksMessageReceived (GSMessage message)
	{
        HandleLog("MSG:" + message.JSONString);
	}

	void HandleLog (string logString){
        GS.GSPlatform.ExecuteOnMainThread(() => {
            HandleLog(logString, null, LogType.Log);
        });
	}
	
	void HandleLog (string logString, string stackTrace, LogType logType)
	{
		if(myLogQueue.Count > 30){
			myLogQueue.Dequeue();
		}
		myLogQueue.Enqueue(logString);
		myLog = "";
		
		foreach(string logEntry in myLogQueue.ToArray()){
            myLog = myLog + "\n\n" + logEntry;	
		}
	}
	
	void OnGUI ()
	{

		// center labels
		GUI.skin.label.alignment = TextAnchor.MiddleCenter;
		GUI.skin.textField.alignment = TextAnchor.MiddleCenter;
        GUI.skin.textArea.alignment = TextAnchor.LowerLeft;
		
		GUILayout.BeginHorizontal();
		
		GUILayout.Label ((GS.Available ? "AVAILABLE" : "NOT AVAILABLE"), GUILayout.Width (itemWidth), GUILayout.Height (itemHeight));
        GUILayout.Label (("SDK Version: " + GS.Version.ToString()), GUILayout.Width (itemWidth), GUILayout.Height (itemHeight));

        GUILayout.EndHorizontal();

        GUILayout.Label ((GS.Authenticated ? "AUTHENTICATED" : "NOT AUTHENTICATED"), GUILayout.Width (itemWidth), GUILayout.Height (itemHeight));

#if (UNITY_PS4 || UNITY_XBOXONE) && !UNITY_EDITOR
        GUI.Button(rectClearLog, "Clear Log");
        if (currSelectedButton == 0)
        {
            GUI.Box(rectClearLog, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }

        GUI.Button(rectLogout, "Logout");
        if (currSelectedButton == 1)
        {
            GUI.Box(rectLogout, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }
#else
        if (GUILayout.Button ("Clear Log", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
			myLog = "";
			myLogQueue.Clear();
		}

        if (GUILayout.Button ("Logout", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
			GS.Reset();
		}

		if (GUILayout.Button ("Disconnect", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
			GS.Disconnect();
		}
#endif

        if (GS.Available)
		{
#if (UNITY_PS4 || UNITY_XBOXONE) && !UNITY_EDITOR
            GUI.Button(rectDisconnect, "Disconnect");
            if (currSelectedButton == 2)
            {
                GUI.Box(rectDisconnect, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
            }
#else
            
#endif
        } else {
#if (UNITY_PS4 || UNITY_XBOXONE) && !UNITY_EDITOR
            GUI.Button(rectDisconnect, "Reconnect");
            if (currSelectedButton == 2)
            {
                GUI.Box(rectDisconnect, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
            }
#else
            if (GUILayout.Button ("Reconnect", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
				GS.Reconnect();
			}
#endif
        }
			
#if (UNITY_PS4 || UNITY_XBOXONE) && !UNITY_EDITOR
        GUI.Button(rectDevAuthReq, "DeviceAuthenticationRequest");
        if (currSelectedButton == 3)
        {
            GUI.Box(rectDevAuthReq, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }

        GUI.Button(rectDurAccDetReq, "durableAccountDetailsRequest");
        if (currSelectedButton == 4)
        {
            GUI.Box(rectDurAccDetReq, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }

        GUI.Button(rectAccDetReq, "accountDetailsRequest");
        if (currSelectedButton == 5)
        {
            GUI.Box(rectAccDetReq, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }
#else
        if (GUILayout.Button ("DeviceAuthenticationRequest", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
			new DeviceAuthenticationRequest().Send((response) => {
				HandleLog("DeviceAuthenticationRequest.JSON:" + response.JSONString);
				HandleLog("DeviceAuthenticationRequest.HasErrors:" + response.HasErrors);
				HandleLog("DeviceAuthenticationRequest.UserId:" + response.UserId);
			});
		}

        if (GUILayout.Button ("durableAccountDetailsRequest", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
			new AccountDetailsRequest().SetDurable(true).Send(null);
		}

        if (GUILayout.Button ("accountDetailsRequest", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
			new AccountDetailsRequest().Send((response) => {
				HandleLog("AccountDetailsRequest.UserId:" + response.UserId);
			});
		}
#endif
        GUILayout.BeginHorizontal();

#if (UNITY_PS4 || UNITY_XBOXONE) && !UNITY_EDITOR
        GUI.Button(rectFbConnectReq, "facebookConnectRequest");
        if (currSelectedButton == 6)
        {
            GUI.Box(rectFbConnectReq, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }

        GUILayout.Space(itemWidth + 5.0f);
#else
        if (GUILayout.Button ("facebookConnectRequest", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
			new FacebookConnectRequest().SetAccessToken(fbToken).Send((response) => {
				HandleLog("FacebookConnectRequest.HasErrors:" + response.HasErrors);
				HandleLog("FacebookConnectRequest.UserId:" + response.UserId);
			});
		}
#endif

        fbToken = GUILayout.TextField (fbToken, GUILayout.Width (itemWidth), GUILayout.Height (itemHeight));

        GUILayout.EndHorizontal();

#if (UNITY_PS4 || UNITY_XBOXONE) && !UNITY_EDITOR
        GUI.Button(rectListAchReq, "listAchievementsRequest");
        if (currSelectedButton == 7)
        {
            GUI.Box(rectListAchReq, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }

        GUI.Button(rectListGameFriendsReq, "listGameFriendsRequest");
        if (currSelectedButton == 8)
        {
            GUI.Box(rectListGameFriendsReq, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }

        GUI.Button(rectListVirtGoodsReq, "listVirtualGoodsRequest");
        if (currSelectedButton == 9)
        {
            GUI.Box(rectListVirtGoodsReq, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }

        GUI.Button(rectListChalTypeReq, "listChallengeTypeRequest");
        if (currSelectedButton == 10)
        {
            GUI.Box(rectListChalTypeReq, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }

        GUI.Button(rectAuthReq, "authenticationRequest");
        if (currSelectedButton == 11)
        {
            GUI.Box(rectAuthReq, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }

        GUI.Button(rectLeadData, "leaderboardData");
        if (currSelectedButton == 12)
        {
            GUI.Box(rectLeadData, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }

        GUI.Button(rectListMsgReq, "listMessageRequest");
        if (currSelectedButton == 13)
        {
            GUI.Box(rectListMsgReq, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }
#else
		if (GUILayout.Button ("listAchievementsRequest", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
			new ListAchievementsRequest().Send((response) => {
				foreach(var c in response.Achievements){
					HandleLog("ListAchievementsRequest:shortCode:" + c.ShortCode);
				}
			});
		}
		
		if (GUILayout.Button ("listGameFriendsRequest", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
			new ListGameFriendsRequest().Send((response) => {
				foreach(var c in response.Friends){
					HandleLog("ListGameFriendsRequest.DisplayName:" + c.DisplayName);
				}
			});
		}
		
		if (GUILayout.Button ("listVirtualGoodsRequest", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
            new ListVirtualGoodsRequest().Send((response) => {

            	foreach(var c in response.VirtualGoods){
    				HandleLog("ListVirtualGoodsRequest.Description:" + c.Description);
    			}
                
            });
		
		}
		
		if (GUILayout.Button ("listChallengeTypeRequest", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
			new ListChallengeTypeRequest().Send((response) => {
				foreach(var c in response.ChallengeTemplates){
					HandleLog("ListAchievementsRequest.Challenge:" + c.ChallengeShortCode);
				}
			});
		}

		if (GUILayout.Button ("authenticationRequest", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
            new AuthenticationRequest ().SetUserName ("gabs").SetPassword ("gabs").Send ((AR) => {

                if (AR.HasErrors) {
    				Debug.Log ("Didnt Work");
    			} else {
    				Debug.Log ("Worked");
    			}
            });

		}


		if (GUILayout.Button ("leaderboardData", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
            new LeaderboardDataRequest ().SetLeaderboardShortCode ("HSCORE").SetEntryCount (10) .Send ((leadResponse) => {

                
    			if (leadResponse.HasErrors) {
    				Debug.Log("Leaderboard data retrieval failed ...");
    			} else {
    				Debug.Log("Leaderboard data retrieval succeeded ..." + leadResponse);
    				
    				// Render the leaderboard entries on the screen
    				
    				foreach (var entry in leadResponse.Data)
    				{
    					string myText = "Rank: " + entry.Rank.ToString() + "    UserName: " + entry.UserName + "    Score: " + entry.GetNumberValue("SCORE").ToString();
    					Debug.Log (myText);
    				}
    				
    			}
            });

		}
		
		if (GUILayout.Button ("listMessageRequest" , GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
			new ListMessageRequest().Send((response) => {
				foreach(var c in response.MessageList){
					HandleLog("ListMessageRequest.MessageList:" + c.GetString("messageId"));
				}
			});
		}
#endif

        GUILayout.BeginHorizontal();

#if (UNITY_PS4 || UNITY_XBOXONE) && !UNITY_EDITOR
        GUILayout.Space(itemWidth + 5.0f);

        GUI.Button(rectDismMsgReq, "dismissMessageRequest");
        if (currSelectedButton == 14)
        {
            GUI.Box(rectDismMsgReq, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }
#else
        if (GUILayout.Button ("dismissMessageRequest", GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
			new DismissMessageRequest().SetMessageId(dismissMessageId).Send((response) => {
				HandleLog("DismissMessageRequest.HasErrors:" + response.HasErrors);

			});
		}
#endif

        dismissMessageId = GUILayout.TextField (dismissMessageId, GUILayout.Width (itemWidth), GUILayout.Height (itemHeight));

        GUILayout.EndHorizontal();

#if (UNITY_PS4 || UNITY_XBOXONE) && !UNITY_EDITOR
        GUI.Button(rectTrace, "TRACE " + (GS.TraceMessages ? "ON" : "OFF"));
        if (currSelectedButton == 15)
        {
            GUI.Box(rectTrace, GUIContent.none, clickedButton ? rectClickedStyle : rectNormalStyle);
        }
#else
		if (GUILayout.Button ("TRACE " + (GS.TraceMessages ? "ON" : "OFF"), GUILayout.Width (itemWidth), GUILayout.Height (itemHeight))) {
			GS.TraceMessages = !GS.TraceMessages;
		}
#endif

        GUI.TextArea (new Rect (420, 5, Screen.width - 425, Screen.height - 10), myLog);
    }
		
	public void Update()
	{
#if (UNITY_PS4 || UNITY_XBOXONE) && !UNITY_EDITOR
        //if (Input.GetKeyUp(KeyCode.UpArrow))
        if (Input.GetKeyUp(KeyCode.Joystick1Button4))
        {
            if (currSelectedButton > 0)
            {
                currSelectedButton--;
            }
            else
            {
                currSelectedButton = numButtons - 1;
            }
        }
        //else if (Input.GetKeyUp(KeyCode.DownArrow))
        else if (Input.GetKeyUp(KeyCode.Joystick1Button5))
        {
            if (currSelectedButton < numButtons - 1)
            {
                currSelectedButton++;
            }
            else
            {
                currSelectedButton = 0;
            }
        }
        else if (Input.GetButtonDown("Fire1") || Input.GetKeyDown(KeyCode.Space))
        {
            clickedButton = true;
        }
        else if (Input.GetButtonUp("Fire1") || Input.GetKeyUp(KeyCode.Space))
        {
            clickedButton = false;

            if (currSelectedButton == 0)
            {
                myLog = "";
                myLogQueue.Clear();
            }
            else if (currSelectedButton == 1)
            {
                GS.Reset();
            }
            else if (currSelectedButton == 2)
            {
                if (GS.Available)
                {
                    GS.Disconnect();
                }
                else
                {
                    GS.Reconnect();
                }
            }
            else if (currSelectedButton == 3)
            {
                new DeviceAuthenticationRequest().Send((response) =>
                {
                    HandleLog("DeviceAuthenticationRequest.JSON:" + response.JSONString);
                    HandleLog("DeviceAuthenticationRequest.HasErrors:" + response.HasErrors);
                    HandleLog("DeviceAuthenticationRequest.UserId:" + response.UserId);
                });
            }
            else if (currSelectedButton == 4)
            {
                new AccountDetailsRequest().SetDurable(true).Send(null);
            }
            else if (currSelectedButton == 5)
            {
                new AccountDetailsRequest().Send((response) =>
                {
                    HandleLog("AccountDetailsRequest.UserId:" + response.UserId);
                });
            }
            else if (currSelectedButton == 6)
            {
                new FacebookConnectRequest().SetAccessToken(fbToken).Send((response) =>
                {
                    HandleLog("FacebookConnectRequest.HasErrors:" + response.HasErrors);
                    HandleLog("FacebookConnectRequest.UserId:" + response.UserId);
                });
            }
            else if (currSelectedButton == 7)
            {
                new ListAchievementsRequest().Send((response) =>
                {
                    foreach (var c in response.Achievements)
                    {
                        HandleLog("ListAchievementsRequest:shortCode:" + c.ShortCode);
                    }
                });
            }
            else if (currSelectedButton == 8)
            {
                new ListGameFriendsRequest().Send((response) =>
                {
                    foreach (var c in response.Friends)
                    {
                        HandleLog("ListGameFriendsRequest.DisplayName:" + c.DisplayName);
                    }
                });
            }
            else if (currSelectedButton == 9)
            {
                new ListVirtualGoodsRequest().Send((response) =>
                {
                    foreach (var c in response.VirtualGoods)
                    {
                        HandleLog("ListVirtualGoodsRequest.Description:" + c.Description);
                    }

                });
            }
            else if (currSelectedButton == 10)
            {
                new ListChallengeTypeRequest().Send((response) =>
                {
                    foreach (var c in response.ChallengeTemplates)
                    {
                        HandleLog("ListAchievementsRequest.Challenge:" + c.ChallengeShortCode);
                    }
                });
            }
            else if (currSelectedButton == 11)
            {
                new AuthenticationRequest().SetUserName("gabs").SetPassword("gabs").Send((AR) =>
                {
                    if (AR.HasErrors)
                    {
                        Debug.Log("Didnt Work");
                    }
                    else {
                        Debug.Log("Worked");
                    }
                });
            }
            else if (currSelectedButton == 12)
            {
                new LeaderboardDataRequest().SetLeaderboardShortCode("HSCORE").SetEntryCount(10).Send((leadResponse) =>
                {
                    if (leadResponse.HasErrors)
                    {
                        Debug.Log("Leaderboard data retrieval failed ...");
                    }
                    else {
                        Debug.Log("Leaderboard data retrieval succeeded ..." + leadResponse);

                        // Render the leaderboard entries on the screen

                        foreach (var entry in leadResponse.Data)
                        {
                            string myText = "Rank: " + entry.Rank.ToString() + "    UserName: " + entry.UserName + "    Score: " + entry.GetNumberValue("SCORE").ToString();
                            Debug.Log(myText);
                        }

                    }
                });
            }
            else if (currSelectedButton == 13)
            {
                new ListMessageRequest().Send((response) =>
                {
                    foreach (var c in response.MessageList)
                    {
                        HandleLog("ListMessageRequest.MessageList:" + c.GetString("messageId"));
                    }
                });
            }
            else if (currSelectedButton == 14)
            {
                new DismissMessageRequest().SetMessageId(dismissMessageId).Send((response) =>
                {
                    HandleLog("DismissMessageRequest.HasErrors:" + response.HasErrors);

                });
            }
            else if (currSelectedButton == 15)
            {
                GS.TraceMessages = !GS.TraceMessages;
            }
        }
#endif
	}
}

