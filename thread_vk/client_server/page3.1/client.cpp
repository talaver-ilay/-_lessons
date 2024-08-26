#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <vector>
#include <string.h>
#include <sstream>

int main(int argc, char** argv){
    int Socket = socket(
        AF_INET,/* IPv4 */
        SOCK_STREAM,/* TCP */
        IPPROTO_TCP);
    struct sockaddr_in SockAddr;
    SockAddr.sin_family = AF_INET;
    SockAddr.sin_port = htons(12345);
    SockAddr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);

    char wBuffer[100] = {0};
    char rBuffer[100] = {0};

    std::cin.getline(wBuffer, sizeof(wBuffer));  
    int con = connect(Socket,(struct sockaddr*)(&SockAddr),sizeof(SockAddr));
    send(Socket,wBuffer,sizeof(wBuffer),MSG_NOSIGNAL);
    recv(Socket,rBuffer,sizeof(rBuffer),MSG_NOSIGNAL);
    std::cout<<rBuffer<<std::endl;
    shutdown(Socket, SHUT_RDWR);
    close(Socket);
    return 0;
}