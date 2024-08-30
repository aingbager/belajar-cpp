#include <iostream>
int main (int argc, char *argv[]) {
  //belajar while
  int a = 7;
  int b = 0;

  do{
    std::cout << "b ke: " << b << std::endl;
    b++;
    if(b ==200){
      std::cout << "program berhenti" << std::endl;
      break;
    }
  }while(a==7);
  return 0;
}
