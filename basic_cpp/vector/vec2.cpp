//#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>

using vector = std::vector<int>;

int main(int argc, char *argv[]) {
  vector vec2 = {2, 3, 4, 5, 6};

  for(auto it = vec2.begin(); it != vec2.end();it++){
    std::cout << *it << std::endl;
  }

  std::cout << "diurutkan dari yang besar" <<std::endl;
  std::sort(vec2.begin(),vec2.end(),std::greater<int>());

  for(const auto& num: vec2){
    std::cout << num << " ";
  }

  return 0;
}
