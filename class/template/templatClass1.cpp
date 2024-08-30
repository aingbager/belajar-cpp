#include <iostream>
using namespace std;

template<typename P>
class Pangkat{
  public:
  P angka1;

  Pangkat(P a1):angka1(a1){}

  P quadrat(P a){
    return a*a;
  }
};

int main (int argc, char *argv[]) {
  int angka_qadrat;
  cout << "masukan angka quadrat: ";
  cin >> angka_qadrat;
  Pangkat<int> udin(angka_qadrat);
  cout << "akar quadrat dari: " << udin.angka1 << " = " << udin.quadrat(udin.angka1) << endl;
  
  return 0;
}
