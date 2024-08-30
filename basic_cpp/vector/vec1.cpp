#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char *argv[]) {
  //belajar vector
  std::vector<int> vec = {1,2,3,4,5,6};

  //index dimulai dari 0
  //akses vector varVector[index]
  std::cout << vec[0] << std::endl;
  std::cout << vec[1] << std::endl;
  std::cout << vec[2] << std::endl;
  std::cout << vec[3] << std::endl;
  std::cout << vec[4] << std::endl;
  std::cout << vec[5] << std::endl;


  //iterator
  for(auto it = vec.begin(); it != vec.end();it++){
    cout << *it << endl;
  }
  return 0;
}
