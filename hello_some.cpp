#include <iostream>
#include <string>

void hello_some(std::string s){ 
   std::cout << "Hello, world!" << std::endl;
   while(getline(std::cin, s) && !s.empty()){ 
      std::cout << "Hello, " << s << "!" << std::endl;         
   }  
}

