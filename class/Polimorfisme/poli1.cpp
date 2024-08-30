//belajar polimorfisme

#include <iostream>
class Cetak{
  public:

  void show(int i){
    std::cout <<"initeger" << std::endl;
  }
  void show(double d){
    std::cout << "double" <<std::endl;
  }

  void show(float f){
    std::cout << "float" << std::endl;
  }
};

int main (int argc, char *argv[]) {

  Cetak p;
  p.show(5);
  p.show(29.5);
  p.show(5.5f);
  
  return 0;
}
