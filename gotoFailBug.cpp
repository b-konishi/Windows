#include <iostream>

int main() {
  int a = 10;
  
  if (a == 10)
    goto SKIP;
    goto SKIP;
  std::cout << a << std::endl;
  
SKIP:
  std::cout << "skip" << std::endl;
  
  return 0;
}