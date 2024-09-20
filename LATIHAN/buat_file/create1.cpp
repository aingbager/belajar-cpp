#include <fstream>
#include <iostream>
int main (int argc, char *argv[]) {
  std::ofstream file("buat_file.txt");
  if(!file){
    std::cerr << "error bro" << std::endl;
    return 1;
  }
  file << "ini baris pertama\n";
  file << "ini baris kedua\n";

  file.close();
  return 0;
}
