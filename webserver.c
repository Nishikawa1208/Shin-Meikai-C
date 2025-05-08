#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define PORT 8080
#define BUFFER_SIZE 1024

void handle_client(int client_socket) {
    char buffer[BUFFER_SIZE];
    read(client_socket, buffer, BUFFER_SIZE - 1);
    if (strncmp(buffer, "GET /IamProgrammer!.png", 24) == 0) {
        FILE *img = fopen("IamProgrammer!.png", "rb");
        if (img) {
            fseek(img, 0, SEEK_END);
            long size = ftell(img);
            rewind(img);
            char *data = malloc(size);
            fread(data, 1, size, img);
            fclose(img);

            char header[BUFFER_SIZE];
            sprintf(header, "HTTP/1.0 200 OK\r\nContent-Type: image/png\r\nContent-Length: %ld\r\n\r\n", size);
            write(client_socket, header, strlen(header));
            write(client_socket, data, size);
            free(data);
        } else {
            const char *error = "HTTP/1.0 404 Not Found\r\n\r\n";
            write(client_socket, error, strlen(error));
        }
        close(client_socket);
        return;
    }
    printf("Request:\n%s\n", buffer);

    // 簡易的にGET / を処理（セキュリティ無視）
    const char *response =
        "HTTP/1.0 200 OK\r\n"
        "Content-Type: text/html\r\n"
        "\r\n"
        "<!DOCTYPE html>\r\n"
        "<html lang=\"ja\">\r\n"
        "<head>\r\n"
        "<meta charset=\"UTF-8\">\r\n"
        "<title>SAKURAI Server</title>\r\n"
        "<style>\r\n"
        "  body { background-color: #00ff00; font-family: sans-serif; text-align: center; margin-top: 50px; }\r\n"
        "  h1 { color: #333366; }\r\n"
        "  p { color: #666666; }\r\n"
        "  .box { background: white; padding: 20px; margin: auto; display: inline-block; box-shadow: 0 0 10px rgba(0,0,0,0.1); }\r\n"
        "</style>\r\n"
        "</head>\r\n"
        "<body>\r\n"
        "  <div class=\"box\">\r\n"
        "    <h1>Welcome to SAKURAI's Web Server!</h1>\r\n"
        "    <p>This server is powered by C language and sockets.</p>\r\n"
        "    <p>櫻井丈太郎です。学生です。</p>\r\n"
        "  </div>\r\n"
        "</body>\r\n"
        "</html>\r\n";

    write(client_socket, response, strlen(response));
    close(client_socket);
}

int main() {
    int server_fd, client_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);

    // ソケット作成
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == 0) {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }

    // バインド
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }

    // リッスン
    if (listen(server_fd, 3) < 0) {
        perror("listen failed");
        exit(EXIT_FAILURE);
    }

    printf("Listening on http://localhost:%d\n", PORT);

    // 無限ループで接続を待つ
    while (1) {
        client_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen);
        if (client_socket < 0) {
            perror("accept failed");
            continue;
        }
        handle_client(client_socket);
    }

    return 0;
}
