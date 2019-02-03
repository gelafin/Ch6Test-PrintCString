#include <iostream>

void printCString(const char *letter){
  while (*letter != '\0'){
    std::cout << *letter;
    letter++; //char is one byte, so advance pointer by 1 byte to access memory address of next char.
  }
}

int main(){

char cString[] {"Hello, world!"};

printCString(cString);

int sillyviewer;
std::cin >> sillyviewer;

return 0;
}
