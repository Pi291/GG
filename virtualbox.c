#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>

int Socket (int domain, int type, int protocol) {
    int res = socket(domain, type, protocol);
    if (res == -1) {
        perror();
        exit(EXIT_FAILURE);
    }
    return res;
}

int main() {
    int server = socket(AF_INET, SOCK_STREAM, 0);

    return 0;

}