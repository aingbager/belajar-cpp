#include <iostream>
class Kata{
  public:

  void cetak(int i){
  std::cout << "ini integer" << std::endl;
  }

  void cetak(double i){
  std::cout << "ini double" << std::endl;
  }
};

int main (int argc, char *argv[]) {

  Kata i;
  i.cetak(2);
  i.cetak(2.3);
  
  return 0;
}
