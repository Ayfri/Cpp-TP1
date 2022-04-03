#include "ex2.hpp"

int factorial(const int &n) {
	auto result = 1;
	for (auto i = 1; i <= n; ++i) result *= i;
	return result;
}

void ex2() {
	const auto n = int_input();
	std::cout << "Factoriel de " << n << " = " << factorial(n) << "\n";
}