#include "ex1.hpp"

std::vector<int> get_even_numbers(const int &n) {
	std::vector<int> evens;
	for (int i = 1; i < n; i++) {
		if (i % 2 == 0) evens.push_back(i);
	}
	return evens;
}

void ex1() {
	auto n = int_input();
	std::vector<int> numbers = get_even_numbers(n);
	std::cout << "Les nombres pairs de 1 à " << n << " sont : " << "\n";
	std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << "\n";
	
	n = int_input();
	numbers = get_even_numbers(n);
	const auto &result = std::accumulate(numbers.begin(), numbers.end(), 0);
	std::cout << "La somme des nombres pairs de 1 à " << n << " est : " << result << "\n";
}