#include <stdexcept>
#include <string>
#include <iostream>

int main (int argc, char *argv[]) {
  std::string angka;
  std::cout << "masukan angka: ";
  std::cin >> angka;

 try{
  int conversi = std::stoi(angka); //conversi string ke integer
  std::cout << conversi << std::endl;
  }catch(std::invalid_argument& e){
    std::cout << "error: bukan angka" << std::endl;
  }catch(std::out_of_range& e){
    std::cout << "error: diluar jangkauan!!!" << std::endl;
  } 
  
  return 0;
}
