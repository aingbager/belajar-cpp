#include <iostream>
class Jualan {
private:
  double sisaUang;

public:
  double uang;

  Jualan(double uang) : sisaUang(uang) {};

  // add saldo
  void add(double add) { sisaUang += add; }
  // kurang saldo
  void kurang(double dec) {
    sisaUang -= dec;
    if (sisaUang < 0) {
      std::cout << "saldo dibawah 0" << std::endl;
    }
  }

  // cek saldo
  double cekSaldo() { return sisaUang; }
};

int main(int argc, char *argv[]) {
  Jualan udin(200.0);
  // saldo awal
  std::cout << "saldo awal: " << udin.cekSaldo() << std::endl;

  // tambah saldo
  udin.add(500.0);

  std::cout << "saldo ditambah: " << udin.cekSaldo() << std::endl;

  // kurang saldo
  udin.kurang(300.0);
  std::cout << "saldo dikurang: " << udin.cekSaldo() << std::endl;

  return 0;
}
