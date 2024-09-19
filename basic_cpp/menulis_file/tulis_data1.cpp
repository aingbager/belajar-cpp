#include <fstream>
#include <iostream>
int main (int argc, char *argv[]) {
  //belajar tulis data file.
  std::ofstream tulis("buatfile.txt"); //ofstream utk membuat/menulis bukan membaca.
  if(!tulis){
    std::cerr << "error membuat atau membaca file" << std::endl;
    return 1;
  }

  //memasukan data ke file
  tulis << "ini kalimat pertama.\n";
  tulis << "ini kalimat kedua.\n";

  tulis.close();
  std::cout << "berhasil membut file" << std::endl;
  return 0;
}
