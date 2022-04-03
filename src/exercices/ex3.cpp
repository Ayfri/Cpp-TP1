#include "ex3.hpp"

auto is_number_strong(const int &number) {
	auto operation_number = number;
	auto sum = 0;
	
	while (operation_number > 0) {
		sum += factorial(operation_number % 10);
		operation_number /= 10;
	}
	
	return sum == number;
}

void ex3() {
	const auto number = int_input();
	std::cout << number << (is_number_strong(number) ? " est " : " n'est pas ") << "un nombre fort." << '\n';
}