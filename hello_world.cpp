#include <iostream>
#include <string>

void hello_world(std::string s){ 
   std::cout << "Hello, world!\n";
   while(getline(std::cin, s) && !s.empty()){ 
      std::cout << "Hello, " << s << "!" << '\n';         
   }  
}

