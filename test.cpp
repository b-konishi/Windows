#include<iostream>

using namespace std;

class util {
public:
	util() {
	}
	int* num();
};
int* util::num() {
	int* num = new int(5);
	return num;
}

int main() {
	util* u = new util();
	int* input = u->num();
	cout << *input << endl;
	
	return 0;
}
