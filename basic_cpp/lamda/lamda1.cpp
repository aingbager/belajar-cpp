#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  // belajar lamda dasar
  //  [capture](parameters) -> return_type { body }

  // tidak menerima parameter dan megembalikan return berupa integer
  auto lamdaBasicUsagel = []() -> int { return 56; };

  // return string
  auto lamdaBasicUsagel1 = []() -> std::string { return "anjay"; };

  auto lamdaBasicUsagel2 = []() -> bool { return true; };

  std::cout << lamdaBasicUsagel() << std::endl;
  std::cout << lamdaBasicUsagel1() << std::endl;
  std::cout << lamdaBasicUsagel2() << std::endl;
  return 0;
}
