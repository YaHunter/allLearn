#include <iostream>

int main(){
  int sum = 0, val = 1;
  while(val <= 10){
  	sum += val++;
  }
  std::cout << "sum = " << sum << std::endl;
  return 0;
}
