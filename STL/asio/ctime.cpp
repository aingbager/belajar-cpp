#include <iostream>
#include <cstring>
#include <ctime>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

#define NTP_TIMESTAMP_DELTA 2208988800ull

void printCurrentTimeFromNTP(const char* server_name) {
    int sockfd;
    struct sockaddr_in server_addr;
    unsigned char buffer[48] = {0};

    // Create socket
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        std::cerr << "Error creating socket\n";
        return;
    }

    // Set server address
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(123); // NTP uses port 123
    inet_pton(AF_INET, server_name, &server_addr.sin_addr);

    // Prepare NTP packet
    buffer[0] = 0x1B; // LI, Version, Mode

    // Send request
    if (sendto(sockfd, buffer, sizeof(buffer), 0, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        std::cerr << "Error sending NTP request\n";
        close(sockfd);
        return;
    }

    // Receive response
    socklen_t addr_len = sizeof(server_addr);
    if (recvfrom(sockfd, buffer, sizeof(buffer), 0, (struct sockaddr*)&server_addr, &addr_len) < 0) {
        std::cerr << "Error receiving NTP response\n";
        close(sockfd);
        return;
    }

    // Extract the time from the buffer (the time is stored in bytes 40 to 43)
    uint32_t secondsSince1900;
    std::memcpy(&secondsSince1900, buffer + 40, sizeof(secondsSince1900));

    // Convert to host byte order
    secondsSince1900 = ntohl(secondsSince1900);

    // Convert NTP time to UNIX time (since January 1, 1970)
    time_t timestamp = secondsSince1900 - NTP_TIMESTAMP_DELTA;

    // Print the current time
    std::cout << "Current time: " << std::ctime(&timestamp);

    close(sockfd);
}

int main() {
    const char* ntpServer = "time.google.com"; // Bisa menggunakan server NTP lain, seperti pool.ntp.org
    printCurrentTimeFromNTP(ntpServer);
    return 0;
}

