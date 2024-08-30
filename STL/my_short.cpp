#include <algorithm> //memasukan algortm untuk menggunakan short mengurutkan
#include <iostream>
#include <vector>

bool compareDescending(int a, int b) { return a > b; }

int main(int argc, char *argv[]) {
  std::vector<int> my_vector = {10, 40, 20, 30};

  std::cout << "sebelum di urutkan" << std::endl;
  std::cout << my_vector[0] << std::endl;
  std::cout << my_vector[1] << std::endl;
  std::cout << my_vector[2] << std::endl;
  std::cout << my_vector[3] << std::endl;

  // mengurutkan
  std::sort(my_vector.begin(), my_vector.end());

  std::cout << "sesudah diurutkan" << std::endl;

  for (int i = 0; i < my_vector.size(); i++) {
    std::cout << my_vector[i] << std::endl;
  }

  // diurutkan terbalik
  std::cout << "diurutkan dari yang terbesar" << std::endl;
  std::sort(my_vector.begin(), my_vector.end(), compareDescending);
  for (int i = 0; i < my_vector.size(); i++) {
    std::cout << my_vector[i] << std::endl;
  }
  return 0;
}
