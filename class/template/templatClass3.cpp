#include <iostream>

template<typename T>
class Luas{
  private:
  T panjang;

  public:
  Luas(T p) : panjang(p){};

  T luas(){
    return panjang * panjang;
  }

  void display(){
    std::cout << "panjang kubus: " << panjang << std::endl;
    std::cout << "luasnya: " << luas() << std::endl;
  }

};
int main (int argc, char *argv[]) {

  Luas<int> kotak(5);
  kotak.display();
  
  return 0;
}
