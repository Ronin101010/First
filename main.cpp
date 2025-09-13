#include <iostream>

int main() {
	int a=3;
	int *b=&a;
	int *ptr=nullptr;
	std::cout << a << ' ' << b << ' ' << ptr;
}