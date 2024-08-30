#include <iostream>
#include <string>

class Buah {
public:
  int kg;
  std::string rasa;
  std::string nama;

  Buah(int kg, std::string rasa, std::string nama) {
    this->kg = kg;
    this->rasa = rasa;
    this->nama = nama;
  }

  void Tampil() {
    std::cout << "nama: " << nama << std::endl;
    std::cout << "rasa: " << rasa << std::endl;
    std::cout << "berat kg: " << kg << std::endl;
  }
};

class Harga: public Buah{
  public:
  std::string harga;

  Harga(int harga,int kg,std::string rasa,std::string nama): Buah(kg,rasa,nama){
    this->harga = harga;
  }

  void Tampil(){
    Buah::Tampil();
    std::cout << "harga: " <<std::endl;
  }
  
};


int main (int argc, char *argv[]) {
  Buah apel(5,"manis","apel");
  apel.Tampil();

  Harga jeruk(5000,5,"manis","jeruk");
  jeruk.Tampil();
  return 0;
}
