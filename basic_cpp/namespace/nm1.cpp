#include <iostream>
namespace pertama{
int a = 5;
int b = 7;
}

namespace kedua {
int a = 2;
int b = 5;
}

int main (int argc, char *argv[]) {

  std::cout << "pertama: " << pertama::a << std::endl;
  std::cout << "pertama: " << pertama::b << std::endl;

  std::cout << "kedua: " << kedua::a << std::endl;
  std::cout << "kedua: " << kedua::b << std::endl;
  
  return 0;
}
