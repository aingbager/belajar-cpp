#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;
    char buffer[1024] = {0};

    // Membuat socket
    sock = socket(AF_INET, SOCK_STREAM, 0);

    // Konfigurasi alamat server
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(8080);

    // Ubah alamat IP ke bentuk biner dan simpan dalam struct sockaddr_in
    inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr);

    // Koneksi ke server
    connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr));

    // Kirim pesan ke server
    const char* message = "Halo dari client!";
    send(sock, message, strlen(message), 0);

    // Baca respon dari server
    read(sock, buffer, 1024);
    std::cout << "Respon dari server: " << buffer << std::endl;

    close(sock);
    return 0;
}
