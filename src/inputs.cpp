#include <iostream>
#include "inputs.hpp"

bool bool_input(const std::string &message) {
	std::cout << message << " (y/n): ";
	char c;
	std::cin >> c;
	return std::tolower(c) == 'y';
}

int int_input(const std::string &message, const int &min, const int &max) {
	std::string input;
	int number;
	
	while (true) {
		std::cout << message;
		std::cin >> input;
		
		try {
			number = std::stoi(input);
			if (number < min || number > max) {
				std::cout << "Veuillez entrer un nombre entre " << min << " et " << max << "." << std::endl;
				continue;
			} else {
				return number;
			}
		} catch (const std::invalid_argument&) {
			std::cout << "Entrée invalide. Veuillez entrer un nombre." << '\n';
		}
	}
	
	return number;
}