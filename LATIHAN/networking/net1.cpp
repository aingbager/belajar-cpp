#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <cstring>

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};

    // Membuat socket file descriptor
    server_fd = socket(AF_INET, SOCK_STREAM, 0);

    // Konfigurasi alamat server
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(8080);

    // Binding socket ke alamat IP dan port
    bind(server_fd, (struct sockaddr*)&address, sizeof(address));

    // Listen untuk koneksi masuk
    listen(server_fd, 3);

    // Terima koneksi dari client
    new_socket = accept(server_fd, (struct sockaddr*)&address, (socklen_t*)&addrlen);

    // Membaca pesan dari client
    read(new_socket, buffer, 1024);
    std::cout << "Pesan dari client: " << buffer << std::endl;

    // Kirim respon ke client
    const char* response = "Pesan diterima!";
    send(new_socket, response, strlen(response), 0);

    close(new_socket);
    close(server_fd);
    return 0;
}
