#include <iostream>

//belajar constructro
class Mahasiswa{
  public:
  int angka;

  Mahasiswa(int val){
    angka = val;
    std::cout <<"konstructor dipanggil: " << val << std::endl;
  }
};

int main (int argc, char *argv[]) {

  Mahasiswa udin(24);
  
  return 0;
}
