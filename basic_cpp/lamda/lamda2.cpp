#include <iostream>

int main (int argc, char *argv[]) {
  //lamda dengan parameter
  auto lamdaParameter = [](int a,int b)->int{
    return a+b;
  };

  std::cout << lamdaParameter(5,7) << std::endl;
  return 0;
}
