#include <iostream>
#include <string>

class Mahasiswa{
  public:
  std::string name;
  int usia;

  Mahasiswa(std::string name = "dodo",int usia = 55){
    this->name = name;
    this->usia = usia;
  }

  void Tampil(){
    std::cout << "name: " << name << std::endl;
    std::cout << "usia: " << usia << std::endl;
  }
};

int main (int argc, char *argv[]) {

  Mahasiswa udin = Mahasiswa("udin",34);
  udin.Tampil();
  Mahasiswa otong = Mahasiswa();
  otong.Tampil();
  
  return 0;
}
