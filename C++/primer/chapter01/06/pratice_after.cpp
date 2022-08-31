#include <iostream>

int main(){

	//1.12
	std::cout << " sum of int between -100 and 100 " << std::endl;
	int sum = 0;
	for(int i = -100; i <= 100; ++i){
		sum += i;
	}
	std::cout << "sum = " << sum << std::endl;

	//1.13
	std::cout << "   1.13   " << std::endl;
	sum = 0;
	for(int val = 50; val <= 100; ++val){
		sum += val;
	}
	std::cout << "sum = " << sum << std::endl;

	std ::cout << " 1.10 --- 1  " << std::endl;
	for(int i = 10; i >= 0; --i){
		std::cout << i << std::endl;
	}

	std::cout << " 1.11 ---- 1 " << std::endl;
	int a = 0, b = 0;
	std::cin >> a >> b;
	if(a > b){
	//swap ab
		int tmp = a;
		a = b;
		b = tmp;
	}
	for(int i = a; i <= b; ++i){
		std::cout << i << std::endl;
	}

	//1.14
	std::cout << "for ::: " << "short " << std::endl;
	//1.15
	return 0;
}
