#include <iostream>
#include <string>

using namespace std;


struct Buah {
  string nama;
  string warna;
  string rasa;

  //dengan konstructor
  Buah(string n,string w,string r){
    this->nama = n;
    this->warna = w;
    this->rasa = r;
  }
};
int main (int argc, char *argv[]) {
  Buah anggur("anggur","ungu","asem");
  cout << "nama: " << anggur.nama << endl;
  cout << "warna: " << anggur.warna << endl;
  cout << "rasa: " << anggur.rasa << endl;
  
  return 0;
}
