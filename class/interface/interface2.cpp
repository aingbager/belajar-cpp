#include <iostream>
class Kendaraan {
public:
  virtual void suara() const { std::cout << "suara kendaraan" << std::endl; }
};

class Mobil : public Kendaraan {
public:
  void suara() const override {
    std::cout << "suara mobil ngenggg.." << std::endl;
  }
};

class Motor : public Kendaraan {
public:
  void suara() const override {
    std::cout << "suara motor bremmm.." << std::endl;
  }
};

int main (int argc, char *argv[]) {
  Mobil* brio = new Mobil();
  brio->suara();
  Motor* beat = new Motor();
  beat->suara();

  delete brio;
  delete beat;
  return 0;
}
