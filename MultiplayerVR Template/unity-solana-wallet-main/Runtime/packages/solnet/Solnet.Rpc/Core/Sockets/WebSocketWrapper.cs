﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.WebSockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Solnet.Rpc.Core.Sockets
{
    class WebSocketWrapper : IWebSocket
    {
        private readonly ClientWebSocket webSocket;

        internal WebSocketWrapper(ClientWebSocket webSocket)
        {
            this.webSocket = webSocket;
        }

        public WebSocketState State => webSocket.State;

        public Task CloseAsync(WebSocketCloseStatus closeStatus, string statusDescription, CancellationToken cancellationToken)
            => webSocket.CloseAsync(closeStatus, statusDescription, cancellationToken);

        public Task ConnectAsync(Uri uri, CancellationToken cancellationToken)
            => webSocket.ConnectAsync(uri, cancellationToken);

        public Task<WebSocketReceiveResult> ReceiveAsync(ArraySegment<byte> buffer, CancellationToken cancellationToken)
        { 
            return webSocket.ReceiveAsync(new ArraySegment<byte>(buffer.Array), cancellationToken);
        }

        public Task SendAsync(List<byte> buffer, WebSocketMessageType messageType, bool endOfMessage, CancellationToken cancellationToken)
            => webSocket.SendAsync(new ArraySegment<byte>(buffer.ToArray()), messageType, endOfMessage, cancellationToken);

        #region IDisposable Support
        private bool disposedValue = false; // To detect redundant calls

        private void Dispose(bool disposing)
        {
            if (!disposedValue)
            {
                if (disposing)
                {
                    webSocket.Dispose();
                }

                disposedValue = true;
            }
        }

        public void Dispose()
        {
            Dispose(true);
        }
        #endregion
    }
}
