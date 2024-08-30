#include <iostream>

template<typename T1,typename T2>
class Mahasiswa{
  public:
  T1 name;
  T2 usia;

  Mahasiswa(T1 name,T2 usia){
    this->name = name;
    this->usia = usia;
  }
  void Tampil()const{
    std::cout << "name: " << name << std::endl;
    std::cout << "usia: " << usia << std::endl;
  }
};
int main (int argc, char *argv[]) {

  Mahasiswa udin = Mahasiswa("udin",25);
  udin.Tampil();
  return 0;
}
