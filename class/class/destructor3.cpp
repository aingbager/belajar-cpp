#include <iostream>
class Penghancur {
public:
  int *angka;

  Penghancur(int value) {
    angka = new int(value);
    std::cout << "konstructor di panggil" << std::endl;
    std::cout << "dengan nilai: " << value << std::endl;
  }
  ~Penghancur(){
    delete angka;
    std::cout << "destructor di kerjakan" << std::endl;
  }
};

int main (int argc, char *argv[]) {
  Penghancur dodo(55);
  return 0;
}
