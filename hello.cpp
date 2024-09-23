/* Glushkova Eva st108255@student.spbu.ru 
first test project */
/* Этот файл должен называться main.cpp. Файл, где находится main должен всегда называться так */

#include <iostream>
#include <string>
/* На самом деле так делать нехорошо, потому что это загрязняет
 * пространство имен и иногда провоцирует конфликты имет, поэтому 
 * привыкай просто везде писать std:: */
using namespace std; 

#include "hello_some.h"
 

int main(){
   string s;
   hello_some(s);
   return 0;
}
