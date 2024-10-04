#include <iostream>
#include <string>
class Kursus;

class Siswa{
  private:
std::string name;

  public:
  Siswa(const std::string& name) : name(name){};

  void cetak(Kursus &kursus);
};

class Kursus{
  private:
std::string kursus;

  public:
  Kursus(const std::string kursus): kursus(kursus){};

  void cetak_kursus(){
    std::cout << "kursus: " << kursus << std::endl;
  }
};

void Siswa::cetak(Kursus &kursus){
  std::cout << "name: " << name << std::endl;
  kursus.cetak_kursus();
}

int main (int argc, char *argv[]) {
  Siswa otong("otong");
  Kursus matematika("matematika");

  otong.cetak(matematika);
  
  return 0;
}
