#include <sys/socket.h>
#include <poll.h>
#include <unistd.h>
#include <stdio.h>
#include <arpa/inet.h>
#include <stdlib.h>

#define PORT 9992
#define MAX_CLIENTS 10
#define BUFFER_SIZE 256

int main() {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("Error creating socket");
        exit(EXIT_FAILURE);
    }

    struct sockaddr_in address = {
        .sin_family = AF_INET,
        .sin_port = htons(PORT),
        .sin_addr.s_addr = INADDR_ANY
    };
    int opt = 1;
if (setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)) < 0) {
    perror("setsockopt failed");
    exit(EXIT_FAILURE);
}

    if (bind(sockfd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("Bind failed");
        exit(EXIT_FAILURE);
    }

    if (listen(sockfd, MAX_CLIENTS) < 0) {
        perror("Listen failed");
        exit(EXIT_FAILURE);
    }

    int clientfd = accept(sockfd, NULL, NULL);
    if (clientfd < 0) {
        perror("Accept failed");
        exit(EXIT_FAILURE);
    }

    struct pollfd fds[1] = {
        { .fd = clientfd, .events = POLLIN }
    };

    while (1) {
        char msg[BUFFER_SIZE] = {0};

        if (poll(fds, 1, -1) < 0) {
            perror("Poll error");
            exit(EXIT_FAILURE);
        }

        if (fds[0].revents & POLLIN) {
            ssize_t bytes_received = recv(clientfd, msg, BUFFER_SIZE, 0);
            if (bytes_received < 0) {
                perror("Receive error");
                exit(EXIT_FAILURE);
            } else if (bytes_received == 0) {
                printf("Client disconnected\n");
                break;
            }
            printf("Received: %s\n", msg);
            send(clientfd, msg, bytes_received, 0);
        }
    }

    close(clientfd);
    close(sockfd);
    return 0;
}
