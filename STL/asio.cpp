#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include <boost/asio/ip/tcp.hpp>

void resolveHostToIP(const std::string& hostname) {
    try {
        // Buat io_context untuk operasi Asio
        boost::asio::io_context io_context;

        // Buat resolver
        boost::asio::ip::tcp::resolver resolver(io_context);

        // Lakukan resolusi hostname ke alamat IP
        boost::asio::ip::tcp::resolver::results_type endpoints = resolver.resolve(hostname, "");

        // Cetak alamat IP yang ditemukan
        for (const auto& entry : endpoints) {
            std::cout << "Hostname: " << hostname << " -> IP: " << entry.endpoint().address() << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

int main() {
    std::string hostname;

    std::cout << "Masukkan hostname: ";
    std::cin >> hostname;

    resolveHostToIP(hostname);

    return 0;
}

