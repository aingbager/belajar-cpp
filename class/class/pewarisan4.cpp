#include <iostream>
#include <string>
class Makanan {
public:
  int harga;
  std::string buah;
  std::string rasa;

  Makanan(int harga, std::string buah, std::string rasa) {
    this->harga = harga;
    this->buah = buah;
    this->rasa = rasa;
  }

  virtual void display() {
    std::cout << "harga: " << harga << std::endl;
    std::cout << "buah: " << buah << std::endl;
    std::cout << "rasa: " << rasa << std::endl;
  }
};

class Apel : public Makanan {
public:
  int kg;

  Apel(int kg, int harga, std::string buah, std::string rasa)
      : Makanan(harga, buah, rasa) {
    this->kg = kg;
  }

  void display() override {
    Makanan::display();
    std::cout << "berat: " << kg << std::endl;
  }
};
int main(int argc, char *argv[]) {
  // belajar pewarisan
  Makanan jeruk(5000, "jeruk", "asem");
  jeruk.display();

  Apel apel1(5, 5000, "apel", "manis");
  apel1.display();

  return 0;
}
