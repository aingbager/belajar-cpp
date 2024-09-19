#include <fstream>
#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  // belajar menulis file
  std::ofstream data("data.txt");
  if (!data) {
    std::cerr << "gagal membuka atau mambaca file" << std::endl;
    return 1;
  }
  data << "ini data pertama\n";
  data << "ini data kedua\n";
  data.close();

  std::cout << "teks berhasil di tulis" << std::endl;

  // membaca file yang berhasil dibuat
  std::ifstream open_data("data.txt");
  if (!open_data) {
    std::cerr << "data gagal di buka atau file corupt" << std::endl;
    return 1;
  }

  std::string baca_data;
  while (std::getline(open_data, baca_data)) {
    std::cout << baca_data << std::endl;
  }

  std::cout << "data berhasl di baca" << std::endl;
  open_data.close();
  return 0;
}
