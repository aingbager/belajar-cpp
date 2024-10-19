#include <iostream>
#include <string>

class Orang {
public:
  std::string name;
  int usia;

  Orang(const char *name, int usia) {
    this->name = name;
    this->usia = usia;
  }

  void display() {
    std::cout << "name: " << name << std::endl;
    std::cout << "usia: " << usia << std::endl;
  }
};

int main (int argc, char *argv[]) {
  Orang udin = Orang("udin",24);
  udin.display();
  return 0;
}

