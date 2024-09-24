#include <iostream>
#include <string>

class Cetak {
public:
  void tampil(int i) { std::cout << "ini integer" << std::endl; }

  void tampil(double d) { std::cout << "ini double" << std::endl; }

  void tampil(char c) { std::cout << "ini char" << std::endl; }
  void tampil(std::string s) { std::cout << "ini string" << std::endl; }
};

int main(int argc, char *argv[]) {
  Cetak p;
  p.tampil(1);
  p.tampil(4.33);
  p.tampil('a');
  p.tampil("anjaay");

  return 0;
}
