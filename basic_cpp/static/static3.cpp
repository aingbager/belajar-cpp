#include <iostream>
void angka(){
  static int angka = 0;
  angka++;
  std::cout<< "angka: " << angka << std::endl;
}

int main (int argc, char *argv[]) {

  angka();
  angka();
  angka();
  
  return 0;
}
