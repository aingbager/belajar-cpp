#include <iostream>

class Hewan{
  public:

  virtual void suara()const{
  std::cout << "suara hewan\n";
  }
};

class Anjing : public Hewan{
  public:

  void suara()const override{
  std::cout << "anjing menggonggong\n";
  }
};

class Kucing: public Hewan{
  public:

  void suara()const override{
    std::cout << "kucing mengeong\n";
  }
};

int main (int argc, char *argv[]) {

  Hewan* anjing = new Anjing();
  Hewan* kucing = new Kucing();

  anjing->suara();
  kucing->suara();
  delete anjing;
  delete kucing;
  
  return 0;
}
