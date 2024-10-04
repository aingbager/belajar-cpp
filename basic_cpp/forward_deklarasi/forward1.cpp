#include <iostream>
class Angka {
public:
  int a;

  Angka(int b) : a(b) {};

  void cetak();
};

void Angka::cetak() { std::cout << a << std::endl; }

int main(int argc, char *argv[]) {
  Angka no1(5);
  no1.cetak();

  return 0;
}
