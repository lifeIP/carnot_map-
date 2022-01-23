#include <iostream>
#include <string>
#include "triada.h"

void print(MC1 s) {
	//подпрограмма отвечающая за выведение на экранрезудьтатов
	std::cout << "\n" << s.AD << "\n";
}
void printMatrix(int inp[]) {
	std::string q = "|-------------------------------|\n";
	std::string y = "|" + std::to_string(inp[0]) + "\t|" + std::to_string(inp[1]) + "\t|" + std::to_string(inp[2]) + "\t|" + std::to_string(inp[3]) + "\t|\n";
	std::string f = "|" + std::to_string(inp[4]) + "\t|" + std::to_string(inp[5]) + "\t|" + std::to_string(inp[6]) + "\t|" + std::to_string(inp[7]) + "\t|\n";
	std::string g = "|" + std::to_string(inp[8]) + "\t|" + std::to_string(inp[9]) + "\t|" + std::to_string(inp[10]) + "\t|" + std::to_string(inp[11]) + "\t|\n";
	std::string c = "|" + std::to_string(inp[12]) + "\t|" + std::to_string(inp[13]) + "\t|" + std::to_string(inp[14]) + "\t|" + std::to_string(inp[15]) + "\t|\n";
	std::cout << q << y << q << f << q << g << q << c << q;
}