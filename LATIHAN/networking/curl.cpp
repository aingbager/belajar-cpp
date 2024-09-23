#include <iostream>
#include <curl/curl.h>
#include <string>

// Callback function untuk menangani data dari server
size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) {
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

int main() {
    CURL* curl;
    CURLcode res;
    std::string readBuffer;

    curl = curl_easy_init();
    if(curl) {
        // Masukkan URL API (gunakan API yang valid dan gratis dari OpenWeather)
        std::string api_url = "http://api.openweathermap.org/data/2.5/weather?q=London&appid=YOUR_API_KEY";

        // Atur URL yang akan diakses
        curl_easy_setopt(curl, CURLOPT_URL, api_url.c_str());
        
        // Set callback untuk menulis data respons
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        // Kirim request
        res = curl_easy_perform(curl);

        // Cleanup
        curl_easy_cleanup(curl);

        // Cetak hasil (JSON)
        std::cout << "Response data: " << readBuffer << std::endl;
    }
    return 0;
}

