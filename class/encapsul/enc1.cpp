// belajar encapsulasi
//
#include <iostream>

class Duit {
private:
  double dana;

public:
  double uang;

  Duit(double uang) { dana = uang; }

  void deposit(double depo) { dana += depo; }

  double ceksaldo() { return dana; }
};

int main(int argc, char *argv[]) {
  Duit user1(100.0);
  std::cout << "dana awal: " << user1.ceksaldo() << std::endl;
  user1.deposit(500.0);
  std::cout << "dana akhir: " << user1.ceksaldo() << std::endl;

  return 0;
}
