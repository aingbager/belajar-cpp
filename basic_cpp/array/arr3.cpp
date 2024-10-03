#include <iostream>
#include <iterator>
#include <string>

int main (int argc, char *argv[]) {
  //belajar arraay
  std::string name[5] = {"udin","idin","odon","otong","iting"};

  for(int i = 0;i < std::size(name);i++){
    std::cout << name[i] << std::endl;
  }
  return 0;
}
