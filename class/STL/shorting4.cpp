#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
int main (int argc, char *argv[]) {
  std::vector<int> angka = {2,5,7,4,1,};
  std::sort(angka.begin(),angka.end());
  for(int i : angka){
    std::cout << i << " ";
  }
  std::cout << std::endl;
  
  std::sort(angka.begin(),angka.end(),std::greater<int>());
  for(int i: angka){
    std::cout << i << " ";
  }
  std::cout << std::endl;
  
  return 0;
}
