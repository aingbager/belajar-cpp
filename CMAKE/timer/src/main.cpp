//timer
//

#include <cstdlib>
#include <iostream>
#include <chrono>
#include <thread>

int main (int argc, char *argv[]) {
  for(int i = 10;i >= 0;i--){
    std::cout << "timer: " << i << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
  }

  system("systemctl poweroff");
  return 0;
}
