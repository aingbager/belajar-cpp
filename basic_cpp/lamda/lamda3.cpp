#include <iostream>

int main (int argc, char *argv[]) {
  //lamda dengan capture
  int a = 6;
  int b = 7;

  //capture dengan value
  auto lamdaCapture = [a,b](){
    return a*b;
  };

  //capture dengan reperence
  auto lamdaCapture2 = [&a,&b](){
    a += 5;
    b += 8;
  };
  std::cout << lamdaCapture() << std::endl;
  lamdaCapture2();
  std::cout << a << " " << b << std::endl;
  return 0;
}
