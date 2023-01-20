#ifndef ADVANCED_PROGRAMMING_1_PROJECT_CLIENT_H
#define ADVANCED_PROGRAMMING_1_PROJECT_CLIENT_H
#include <iostream>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <vector>
#include "DistanceClass.h"
#include <sstream>
#include "Command.h"

#define SIZE_OF_BUFFER 4096


class Client {
public:
    // createClient function creates a socket and connects to a server
    int createClient(char *ipAddress, string portNum);
    // vectorToCharArray function converts a vector of doubles to a char array
    //int vectorToCharArray(const std::vector<double>& vec, char* charArray);
    void selectCommand();

    void sendBuffer(char data_addr[], int sock);
    char *getBuffer(char *buffer, int sock);
};



#endif //ADVANCED_PROGRAMMING_1_PROJECT_CLIENT_H
