#include <iostream>

class Dagang{
  private:
  double sisaUang;

  public:
  double uang;

  Dagang(double uang):sisaUang(uang){}

  //tambah saldo
  void tambahSaldo(double tambah){
    sisaUang += tambah;
  }

  //kurang saldo
  void kurangSaldo(double kurang){
    sisaUang -= kurang;
    if(sisaUang < 0){
      std::cout << "saldo dibahaw nol" << std::endl;
    }
  }

  //cek saldo
  //untuk mengambil data di private tidak boleh menggunakan void
  double cekSaldo(){
    return sisaUang;
  }

};

int main (int argc, char *argv[]) {

  Dagang udin(300.0);
  std::cout << "cek saldo: " << udin.cekSaldo() << std::endl;
  udin.tambahSaldo(250.0);
  std::cout << "cek saldo: " << udin.cekSaldo() << std::endl;
  udin.kurangSaldo(650);
  std::cout << "cek saldo: " << udin.cekSaldo() << std::endl;

  
  return 0;
}
