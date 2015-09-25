#include <iostream>
#include <time.h>

int main() {
  volatile int num = 0;
  const int NUM = 100;
  clock_t start = clock();
  for (unsigned int i = 0; i < 1000000000; i++) {
   // num = NUM;
  }
  clock_t end = clock();
  
  std::cout << "Execute-time: " << end-start << std::endl;
  
  return 0;
}
