#include "menu.hpp"

void run_exercice(const int &n) {
	switch (n) {
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		case 3:
			ex3();
			break;
		case 4:
			ex4();
			break;
		case 5:
			ex5();
			break;
		default:
			std::cout << "Choix invalide." << std::endl;
			break;
	}
}

inline void show_exercices_list() {
	print_line("Exercices");
	for (auto i = 1U; i < 6U; ++i) std::cout << "Exercise " << i << "\n";
}

inline void print_line(const std::string &message, const int unsigned &length) {
	// print the message centered in the line via "="
	const auto &size = (length / 2U - message.length() / 2U) - 2U;
	std::cout << std::string(size, '=') << " " << message << " " << std::string(size, '=') << '\n';
}

void show_menu() {
	std::cout << "Bienvenue dans le TP 1 !" << '\n';
	show_exercices_list();
	
	do {
		std::cout << "Veuillez choisir un exercice à lancer : ";
		
		std::string input;
		std::cin >> input;
		
		if (tolower(input) == "exit") break;
		
		if (input.length() != 1U || input[0U] < '1' || input[0U] > '5') {
			std::cout << "Numéro d'exercice invalide." << '\n';
			continue;
		}
		
		const auto &exercise = std::stoi(input);
		print_line("Exercice " + input);
		run_exercice(exercise);
		std::cout << "Tapez ENTRÉE pour continuer." << '\n';
		getch();
		
		show_exercices_list();
	} while (true);
}
