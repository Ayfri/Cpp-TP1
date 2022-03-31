#include "ex5.hpp"

void ex5() {
	static std::random_device rd;
	static std::mt19937 gen(rd());
	
	int minmax;
	int random_number;
	
	do {
		minmax = int_input("Nombre mystère : ");
		std::cout << "Le nombre à trouver est compris entre " << minmax << " et " << -minmax << '\n';
		std::uniform_int_distribution<> distr(-minmax, minmax);
		random_number = distr(gen);
		
		play_game(minmax, random_number);
	} while(bool_input("Voulez-vous refaire une partie ?"));
}

void play_game(const int &minmax, const int &random_number) {
	int input;
	
	do {
		input = int_input("Entrer un nombre : ", -minmax, minmax);
		
		if (input == random_number) std::cout << "Bravo, vous avez trouvé le nombre mystère !\n";
		else std::cout << (input > random_number ? "C'est moins !\n" : "C'est plus !\n");
	} while (input != random_number);
}
