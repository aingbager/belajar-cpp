#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Membuka kamera (biasanya kamera laptop berada di index 0)
    cv::VideoCapture cap(0);
    if (!cap.isOpened()) {
        std::cerr << "Error: Tidak dapat mengakses kamera" << std::endl;
        return -1;
    }

    // Membuat jendela untuk menampilkan video
    cv::namedWindow("Kamera", cv::WINDOW_AUTOSIZE);

    while (true) {
        cv::Mat frame;
        
        // Membaca frame dari kamera
        cap >> frame;
        
        // Jika frame kosong (kamera tidak memberikan output), keluar dari loop
        if (frame.empty()) {
            std::cerr << "Error: Tidak ada frame dari kamera" << std::endl;
            break;
        }

        // Menampilkan frame di jendela
        cv::imshow("Kamera", frame);

        // Menunggu 1 ms untuk input dari pengguna (tekan 'q' untuk keluar)
        if (cv::waitKey(1) == 'q') {
            break;
        }
    }

    // Melepaskan kamera dan menutup jendela
    cap.release();
    cv::destroyAllWindows();
    
    return 0;
}
