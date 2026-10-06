#include "header/serviceFunctions.h"

void printarr(int* a, unsigned sz) {
    for (size_t i = 0; i < sz; i++) std::cout << a[i] << ' ';
    std::cout << '\n';
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
