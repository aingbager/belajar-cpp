#include <iostream>
class Kendaraan{
  public:

  virtual void suara() const = 0;
  virtual ~Kendaraan(){}
};

class Mobil: public Kendaraan{
  public:
  void suara()const override{
    std::cout << "grung grung" << std::endl;
  }
};

class Motor: public Kendaraan{
  public:
  void suara()const override{
    std::cout << "ngengg" << std::endl;
  }
};

int main (int argc, char *argv[]) {
  Kendaraan* avanza = new Mobil();
  Kendaraan* honda = new Motor();

  avanza->suara();
  honda->suara();

  delete avanza;
  delete honda;
  
  return 0;
}
