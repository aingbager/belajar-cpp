#include <iostream>
#include <string>

using namespace std;

struct Buah {
  string nama;
  string rasa;
  string warna;
};

int main(int argc, char *argv[]) {

  Buah apel;
  apel.nama = "Apel";
  apel.rasa = "Asem";
  apel.warna = "merah";

  cout << "nama: " << apel.nama << endl;
  cout << "rasa: " << apel.rasa << endl;
  cout << "warna: " << apel.warna << endl;

  return 0;
}
