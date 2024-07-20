#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>


// strace execute_name посмотреть системные вызовы
// telnet 127.0.0.0 12345 подключиться к серверу
// fuser -k 12345/tcp закрыть все соединения на порт
// ps aux | fgrep server
// lsof -p PID
// gdb -p PID
int main(int argc, char** argv){
    int MasterSocket = socket(
        AF_INET,/* IPv4 */
        SOCK_STREAM,/* TCP */
        IPPROTO_TCP);

    struct sockaddr_in SockAddr;
    SockAddr.sin_family = AF_INET;
    SockAddr.sin_port = htons(12345);
    SockAddr.sin_addr.s_addr = htonl(INADDR_ANY);// 0.0.0.0
    bind(MasterSocket,(struct sockaddr*) (&SockAddr),sizeof(SockAddr));

    listen(MasterSocket,SOMAXCONN);
    while(true){
        int SlaveSocket = accept(MasterSocket,0,0);
        std::cout<<SlaveSocket<<std::endl;
        char Buffer[100] = {0};
        recv(SlaveSocket, Buffer, sizeof(Buffer), MSG_NOSIGNAL);
        send(SlaveSocket,Buffer,sizeof(Buffer),MSG_NOSIGNAL);
        shutdown(SlaveSocket, SHUT_RDWR);
        close(SlaveSocket); 
        std::cout<<Buffer<<std::endl;
    }   
    return 0;
}