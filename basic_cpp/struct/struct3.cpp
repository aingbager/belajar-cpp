#include <iostream>
#include <string>

struct Buah {
  int harga;
  std::string nama;
  std::string rasa;
  
};

int main (int argc, char *argv[]) {

  Buah apel;
  apel.harga = 2500;
  apel.nama = "apel";
  apel.rasa = "manis";

  std::cout << "buah apel " << apel.rasa << " harganya " << apel.harga << std::endl;
  
  return 0;
}
