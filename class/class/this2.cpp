#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Data {
public:
  std::string name;
  int usia;
  std::string alamat;

  Data(const char *name, int usia, const char *alamat) {
    this->name = name;
    this->usia = usia;
    this->alamat = alamat;
  }

  void Cetak() {
    std::cout << "name: " << name << std::endl;
    std::cout << "usia: " << usia << std::endl;
    std::cout << "alamat: " << alamat << std::endl;
  }
};

int main (int argc, char *argv[]) {
  //menggunakan uniq pointer
  std::unique_ptr<Data> person1 = make_unique<Data>("udin",24,"kp.ciantra");
  unique_ptr<Data> person2 = make_unique<Data>("otong",26,"kp.cijingga");
  person1->Cetak();
  person2->Cetak();
  return 0;
}
