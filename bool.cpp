#include <iostream>

bool crazyBool() {
  bool judge;
  char* c = reinterpret_cast<char*>(&judge);
  *c = 2;
  return judge;
}

int main() {
  bool a = crazyBool();
  
  if (a == true) {
    std::cout << "a = true, " << (int)a << std::endl;
  }
  if (!a == true) {
    std::cout << "!a = true, " << (int)!a << std::endl;
  }
	return 0;
}