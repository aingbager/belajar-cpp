#include <chrono>
#include <cstdlib>
#include <iostream>
#include <thread>

int main(int argc, char *argv[]) {

  int inputan;

  std::cout << "=====PROGRAM SHUTDOWN ====" << std::endl;

  std::cout << "\n1.shutdown. \n2.batal.\nmasukan inputan? 1/2: ";
  std::cin >> inputan;

  if (inputan == 1) {
    std::cout << "komputer dimatikan dalam 10 detik." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    for (int i = 10; i >= 0; i--) {
      std::cout << i << std::endl;
      std::this_thread::sleep_for(std::chrono::seconds(1));
      system("clear");
    }
    system("systemctl poweroff");
  } else if (inputan == 2) {
    std::cout << "program dibatalkan." << std::endl;
  } else {
    std::cout << "inputan salah program dibatalkan..." << std::endl;
  }

  return 0;
}
