#include <fstream>
#include <iostream>
#include <string>
int main (int argc, char *argv[]) {
  
  //baca data
  std::ifstream baca_file("buatfile.txt");
  if(!baca_file){
    std::cerr << "error membaca atau korupt" << std::endl;
    return 1;
  }

  std::string baca_teks;
  while(std::getline(baca_file,baca_teks)){
    std::cout << baca_teks << std::endl;
  }

  //sesudah dibaca lalu di close
  baca_file.close();
  return 0;
}
