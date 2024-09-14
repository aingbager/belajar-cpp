#include <iostream>
class Suara {
public:
  virtual void suara() { std::cout << "suara hewan" << std::endl; }
};

class Kucing : public Suara {
public:
  void suara() { std::cout << "mengeong" << std::endl; }
};

class Anjing : public Suara {
public:
  void suara() { std::cout << "gugguk" << std::endl; }
};

int main(int argc, char *argv[]) {
  Kucing *kucing1 = new Kucing();
  kucing1->suara();

  Anjing *anjing1 = new Anjing();
  anjing1->suara();

  return 0;
}
