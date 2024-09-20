#include <cstdio>
#include <fstream>
#include <iostream>
int main(int argc, char *argv[]) {
  // buat file
  const char *name = "ini_file.txt";
  std::ofstream file(name);

  if (file.is_open()) {
    file << "ini adalah isi file\n";
    file.close();
    std::cout << "file berhasil dibuat." << std::endl;
  } else {
    std::cerr << "file gagal dibuat.." << std::endl;
    return 1;
  }

  if(std::remove(name) == 0){
    std::cout << "file berhasil di hapus" << std::endl;
  }else{
    std::perror("gagal menghapus");
  }
  return 0;
}
