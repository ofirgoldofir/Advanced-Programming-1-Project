//
// Created by omer on 1/22/23.
//

#include "BeforeDownloadCommandClient.h"
void BeforeDownloadCommandClient::execute() {
    SocketIO scio(sock);
    StandardIO sdio;
    string serverStr;
    dio = &scio;
    dio->write("5");
    dio = &sdio;
    *path = dio->read();
}