#include "ex2.hpp"

int factorial(const int &n) {
	int result = 1;
	for (int i = 1; i <= n; ++i) result *= i;
	return result;
}

void ex2() {
	std::cout << "Saisir un nombre : ";
	auto n = int_input();
	std::cout << "Factoriel de " << n << " = " << factorial(n) << "\n";
}