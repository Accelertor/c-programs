#include <sys/socket.h>
#include <poll.h>
#include <unistd.h>
#include <stdio.h>
#include <arpa/inet.h>
#include <stdlib.h>

#define SERVER_IP "127.0.0.1"
#define PORT 8080
#define BUFFER_SIZE 256

int main() {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("Error creating socket");
        exit(EXIT_FAILURE);
    }

    struct sockaddr_in server_address = {
        .sin_family = AF_INET,
        .sin_port = htons(PORT)
    };

    if (inet_pton(AF_INET, SERVER_IP, &server_address.sin_addr) <= 0) {
        perror("Invalid address/ Address not supported");
        exit(EXIT_FAILURE);
    }

    if (connect(sockfd, (struct sockaddr *)&server_address, sizeof(server_address)) < 0) {
        perror("Connection failed");
        exit(EXIT_FAILURE);
    }

    struct pollfd fds[1] = {
        { .fd = sockfd, .events = POLLIN }
    };

    while (1) {
        char msg[BUFFER_SIZE] = {0};

        if (poll(fds, 1, -1) < 0) {
            perror("Poll error");
            exit(EXIT_FAILURE);
        }

        if (fds[0].revents & POLLIN) {
            ssize_t bytes_received = recv(sockfd, msg, BUFFER_SIZE, 0);
            if (bytes_received < 0) {
                perror("Receive error");
                exit(EXIT_FAILURE);
            } else if (bytes_received == 0) {
                printf("Server closed connection\n");
                break;
            }
            printf("Received: %s\n", msg);
        }

        printf("Enter message: ");
        if (fgets(msg, BUFFER_SIZE, stdin) == NULL) {
            perror("Error reading from stdin");
            exit(EXIT_FAILURE);
        }
        send(sockfd, msg, sizeof(msg), 0);
    }

    close(sockfd);
    return 0;
}
