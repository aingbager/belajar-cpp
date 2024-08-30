#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> my_vector;
  my_vector.push_back(10);
  my_vector.push_back(20);
  my_vector.push_back(30);

  for (int i = 0; i < my_vector.size(); i++) {
    std::cout << my_vector[i] << std::endl;
  }

  // atau
  std::cout << "atau" << std::endl;
  std::cout << my_vector[0] << std::endl;
  return 0;
}
