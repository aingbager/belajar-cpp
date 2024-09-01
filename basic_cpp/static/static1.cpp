#include <iostream>
using namespace std;

void cek(){
  static int angka = 0;
  angka ++;

  cout << angka << endl;
}

int main (int argc, char *argv[]) {
  cek();
  cek();
  cek();
  cek();
  return 0;
}
