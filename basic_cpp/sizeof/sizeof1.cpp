#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  //cek ukuran
  int a = 5;
  double b = 5;
  float c = 5.5;
  char d = '6';
  long e = 5;

  cout << sizeof(a) << " bytes" << endl;
  cout << sizeof(b) << " bytes" << endl;
  cout << sizeof(c) << " bytes" << endl;
  cout << sizeof(d) << " bytes" << endl;
  cout << sizeof(e) << " bytes" << endl;
  return 0;
}
