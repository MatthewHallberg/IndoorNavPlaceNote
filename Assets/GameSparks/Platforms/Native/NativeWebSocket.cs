using UnityEngine;
using System.Collections;
using System;
using GameSparks.Core;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace GameSparks.Platforms.Native
{
#if ((UNITY_SWITCH || UNITY_XBOXONE) && !UNITY_EDITOR) || GS_FORCE_NATIVE_PLATFORM
    ///  <summary>
    /// iOS specific websocket. This is a wrapper for the native objective-c Websocket.
    /// </summary>
    public class NativeWebSocket : IControlledWebSocket
    {
        static int nextSocketId;

        public int SocketId
        {
            get;
            private set;
        }

        string url;
        System.Action onOpen;
        System.Action<string> onMessage;
        System.Action<string> onError;
        System.Action onClose;

        WebSocketController controller;
        string controllerName;

    #region IGameSparksWebSocket implementation

        public void Initialize(string url, Action<string> onMessage, Action onClose, Action onOpen, Action<string> onError)
        {
            this.SocketId = nextSocketId++;
            this.onMessage = onMessage;
            this.onClose = onClose;
            this.onOpen = onOpen;
            this.onError = onError;
            this.url = url;

        }

        public void SetController(WebSocketController controller)
        {
            this.controller = controller;
            controllerName = this.controller.GSName;
            controller.AddWebSocket(this);
        }

        public void Open()
        {
            State = GameSparksWebSocketState.Connecting;
            nativeWebSocket.GSExternalOpen(SocketId, url, controllerName);
        }

        public void Close()
        {
            State = GameSparksWebSocketState.Closing;
            nativeWebSocket.GSExternalClose(SocketId);
        }

		public void Terminate()
		{
			Close();
		}

		public void Send(string request)
        {
            if (State != GameSparksWebSocketState.Open)
            {
                throw new Exception("Websocket is not open");
            }
            nativeWebSocket.GSExternalSend(SocketId, request);
        }

        public GameSparksWebSocketState State
        {
            get;
            private set;
        }

    #endregion

    #region IControlledWebSocket implementation, triggered by WebSocketController

        public void TriggerOnClose()
        {
            State = GameSparksWebSocketState.Closed;
            controller.RemoveWebSocket(this);

            if (onClose != null)
                onClose();
        }

        public void TriggerOnOpen()
        {
            State = GameSparksWebSocketState.Open;

            if (onOpen != null)
                onOpen();
        }

        public void TriggerOnError(string message)
        {
            State = GameSparksWebSocketState.Closed;

            if (onError != null)
                onError(message);
        }

        public void TriggerOnMessage(string message)
        {
            if (onMessage != null)
                onMessage(message);
        }

        public bool Update()
        {
            if (nativeWebSocket != null)
            {
                nativeWebSocket.Update(Time.unscaledDeltaTime);

                while (true)
                {
                    var result = nativeWebSocket.GetNextResult();
                    if (result == null) break;
                    switch (result.getType())
                    {
                        case GameSparksNative.detail.NativeWebSocket.Result.Type.Close:
                            TriggerOnClose(); break;
                        case GameSparksNative.detail.NativeWebSocket.Result.Type.Error:
                            TriggerOnError(result.getMessage()); break;
                        case GameSparksNative.detail.NativeWebSocket.Result.Type.Message:
                            TriggerOnMessage(result.getMessage()); break;
                        case GameSparksNative.detail.NativeWebSocket.Result.Type.Open:
                            TriggerOnOpen(); break;
                    }
                }
            }
            return true;
        }

    #endregion

        // if you get a compile error here, please contact GameSparks support for the native XBox One and PS4 support plugins.
        GameSparksNative.detail.NativeWebSocket nativeWebSocket = new GameSparksNative.detail.NativeWebSocket();
	}
#endif
}
