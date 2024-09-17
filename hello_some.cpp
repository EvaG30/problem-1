void hello_some(std::string s){

   while(getline(std::cin, s) && !s.empty()){ 
      std::cout << "Hello, " << s << "!" << std::endl;    
   }
   
}

