#include <iostream>
class Cetak {
public:
  void show(int i) { std::cout << "integer" << std::endl; }
  void show(double i) { std::cout << "double" << std::endl; }
  void show(float i) { std::cout << "float" << std::endl; }
};

int main(int argc, char *argv[]) {
  Cetak c1;
  c1.show(4);
  c1.show(4.3);
  c1.show(4.45f);

  return 0;
}
