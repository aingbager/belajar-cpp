#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int angka = 5;
  int *angka2 = &angka;

  std::cout << "alamat memori angka = " << &angka << endl;
  std::cout << "alamat memori angka2 = " << angka2 << endl;
  return 0;
}
