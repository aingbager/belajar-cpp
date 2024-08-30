#include <iostream>

template<typename T>
T tambah(T a,T b){
  return a+b;
}

int main (int argc, char *argv[]) {
  int a = 5;
  int b = 8;
  std::cout << tambah(a,b) << std::endl;
  std::cout << tambah(2.3,3.4) << std::endl;
  
  return 0;
}
