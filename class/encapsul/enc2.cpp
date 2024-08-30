#include <iostream>

class Dagang{
  private:
  double dana;

  public:
  double uang;

  Dagang(double uang){
    this->dana = uang;
  }

  void tambahDepo(double tambah){
    dana += tambah;
  }

  void kurangDepo(double kurang){
    dana -= kurang;
  }

  double cekDana(){
    return dana;
  }
};

int main (int argc, char *argv[]) {

  Dagang udin(200.0);
  std::cout << "uang dasar: " << udin.cekDana() << std::endl;
  udin.tambahDepo(300.0);
  std::cout << "uang hasil: " << udin.cekDana() << std::endl;
  udin.kurangDepo(250.0);
  std::cout << "uang hasil: " << udin.cekDana() << std::endl;
  
  return 0;
}
