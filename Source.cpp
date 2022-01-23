#include <iostream>
#include "triada.h"

int main() {

	int inp[16];
	for (int i = 0; i < 16; i++) {
		std::cout << "L" << i;
		std::cin >> inp[i];
	}
	print(any_duad(triada(inp)));
	printMatrix(inp);
}