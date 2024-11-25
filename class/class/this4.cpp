#include <iostream>
#include <string>
class Name {
public:
  std::string name;
  std::string alamat;
  int usia;

  Name(const char *name, const char *alamat, int usia) {
    this->name = name;
    this->alamat = alamat;
    this->usia = usia;
  }

  void display() {
    std::cout << name << std::endl;
    std::cout << alamat << std::endl;
    std::cout << usia << std::endl;
  }
};

int main (int argc, char *argv[]) {
  Name udin("udin","ciantra",23);
  udin.display();
  return 0;
}
