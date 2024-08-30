#include <iostream>
class Mahasiswa{
  public:
  int* angka;

  Mahasiswa(int value){
    angka = new int(value);
    std::cout << "konstructor di panggil";
    std::cout << "alokasi memori dilakukan" << std::endl;
    std::cout <<"dengan nilai: " << value <<std::endl;
  }

  ~Mahasiswa(){
    delete angka;
    std::cout << "destructor dilakukan" << std::endl;
  }
};


int main (int argc, char *argv[]) {
  Mahasiswa udin(24);
  
  return 0;
}
