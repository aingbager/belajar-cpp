#include <iostream>
#include <stdexcept>
#include <vector>

using vecInt = std::vector<int>;

int getElement(const vecInt &arr, int index) {
  if (index < 0 || index >= arr.size()) {
    throw std::out_of_range("Error index out of bounds");
  }
  return arr[index];
}

int main(int argc, char *argv[]) {

  vecInt numbers = {10, 20, 30, 40};
  int index;

  std::cout << "enter index: ";
  std::cin >> index;

  try {
    int value = getElement(numbers, index);
    std::cout << "index: " << index << " value: " << value << std::endl;
  }catch(const std::out_of_range& err){
    std::cerr << "excetion: " << err.what() << std::endl;
  }

  return 0;
}
