#include <iostream>

int main(){
   //1.3
   std::cout << "1.3" << std::endl;
   std::cout << "Hello World!!" << std::endl;
   //1.4
   std::cout << "1.4" << std::endl;
   std::cout << "Enter two numbers:" << std::endl;
   int v1 = 0, v2 = 0;
   std::cin >> v1 >> v2;
   std::cout << "The dot of " << v1 << "and " << v2
	    << "is " << v1 * v2 << std::endl;
   //1.5
   std::cout << "1,5";
   std::cout << "Enter two numbers:" << std::endl;
   std::cin >> v1;
   std::cin >> v2;
   std::cout << "The sum of ";
   std::cout << v1;
   std::cout << "and ";
   std::cout << v2;
   std::cout << " is ";
   std::cout << v1 + v2 << std::endl;
   
   //1.6
   std::cout << "1.6 illigal" << std::endl;
   std::cout << "The sum of " << v1;
   std::cout << " and " << v2;
   std::cout << " is " << v1 + v2 << std::endl;
   return 0;
}
