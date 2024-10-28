#include <iostream>
class Name{
  public:
  int a;

  Name(int b): a(b){};

  void display();
};

void Name::display(){
  std::cout << a << std::endl;
}

int main (int argc, char *argv[]) {

  Name udin1(5);
  udin1.display();
  
  return 0;
}
