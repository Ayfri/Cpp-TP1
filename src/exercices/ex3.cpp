#include "ex3.hpp"

auto is_number_strong(int &number)  {
	const auto &originalNumber = number;
	auto sum = 0;

	while (number > 0) {
		const auto &digit = number % 10;
		number /= 10;
		sum += factorial(digit);
	}

	return sum == originalNumber;
}

void ex3() {
	auto number = int_input("Saisir un nombre : ");
	
	std::cout << number << (is_number_strong(number) ? " est " : " n'est pas ") << "un nombre fort."  << '\n';
}