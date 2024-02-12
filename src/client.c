#include <stdio.h>
#include <string.h>
#include <sys/socket.h>

void createSever() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    bind(sock, sockaddr)
}

int main(int argc, char* argv[]) {
    printf("Hello World!\n");
}