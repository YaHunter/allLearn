#include <iostream>

int main(){

	//1,9
	int sum = 0, val = 50;
	while(val <= 100){
		sum += val++;
	}
	std::cout << "sum = " << sum << std::endl;
	//1.10
	std::cout << "   1.10   "<< std::endl;
	val = 10;
	while(val >= 0){
		std::cout << "print " << val-- << std::endl;
	}
	//1.11
	std::cout <<"  1.11  " << std::endl;
	int a = 0, b = 0;
	std::cin >> a >> b;
	if(a > b){
	  int tmp = a;
	  a = b;
	  b = tmp;
	}
	while(a <= b){
	  std::cout << "print inter   " << a++ << std::endl;
	}
	return 0;
}
