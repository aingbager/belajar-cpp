// KALKULATOR //

#include <iostream>

int main(int argc, char *argv[]) {

  std::cout << "===== KALKULATOR SEDERHANA ======\n" << std::endl;
  int a, b,result;
  char operasi;
  std::cout << "masukan angka pertama: ";
  std::cin >> a;
  std::cout << "masukan angka kedua: ";
  std::cin >> b;

  std::cout << "pilih operasi: [*/+-] ";
  std::cin>> operasi;

  if(operasi == '*'){
    std::cout << "hasil: " << a*b << std::endl;
  }else if(operasi == '+'){
    std::cout << "hasil: " << a+b << std::endl;
  }else if(operasi == '-'){
    std::cout << "hasil: " << a-b << std::endl;
  }else if(operasi == '/'){
    if(b != 0){
      std::cout << "hasil: " << a/b << std::endl;
    }else{
      std::cout << "tidak boleh dibagi dengan 0" << std::endl;
    }
  }else{
    std::cout << "inputan salah....!!!" << std::endl;
  }
  return 0;
}
