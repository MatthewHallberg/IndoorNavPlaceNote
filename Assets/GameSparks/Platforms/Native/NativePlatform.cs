using UnityEngine;
using System.Collections;
using System;
using GameSparks.Core;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace GameSparks.Platforms.Native
{
#if ((UNITY_SWITCH || UNITY_XBOXONE) && !UNITY_EDITOR) || GS_FORCE_NATIVE_PLATFORM
    /// <summary>
    /// Platform specific implementation used for the iOS Platform.
    /// </summary>
    public class NativePlatform : PlatformBase
    {
        TimerController timerController;
        WebSocketController webSocketController;

    #region implemented abstract members of PlatformBase

        public override IGameSparksTimer GetTimer()
        {
#if INCLUDE_IL2CPP && !UNITY_XBOXONE
            return new GameSparksTimer();
#else

            var timer = new UnityTimer();
            timer.SetController(timerController);
            return timer;
#endif
        }

        public override string MakeHmac(string stringToHmac, string secret)
        {
			return GameSparksUtil.MakeHmac(stringToHmac, secret);
        }

        static byte[] GetBytes(string str)
        {
            byte[] bytes = new byte[str.Length * sizeof(char)];
            System.Buffer.BlockCopy(str.ToCharArray(), 0, bytes, 0, bytes.Length);
            return bytes;
        }

        static string GetString(byte[] bytes)
        {
            char[] chars = new char[bytes.Length / sizeof(char)];
            System.Buffer.BlockCopy(bytes, 0, chars, 0, bytes.Length);
            return new string(chars);
        }

        public override IGameSparksWebSocket GetSocket(string url, Action<string> messageReceived, Action closed, Action opened, Action<string> error)
        {
            var socket = new NativeWebSocket();
            socket.Initialize(url, messageReceived, closed, opened, error);
            socket.SetController(webSocketController);
            socket.Open();
            return socket;
        }

    #endregion

        protected override void Start()
        {
            timerController = new TimerController();
            timerController.Initialize();

            webSocketController = gameObject.AddComponent<WebSocketController>();

            var gameSparksUnity = GetComponent<GameSparksUnity>();
            GameSparksSettings.SetInstance(gameSparksUnity.settings);

            base.Start();

        }

        protected override void Update()
        {
            base.Update();
            timerController.Update();
        }

	}
#endif


}
