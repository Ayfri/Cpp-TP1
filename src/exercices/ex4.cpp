#include "ex4.hpp"

double get_average_of_notes(const std::array<int, NOTE_LENGTH> &notes) {
	double sum = .0;
	for (auto note: notes) sum += static_cast<double>(note);
	
	return sum / static_cast<double>(notes.size());
}

inline int get_max_note(const std::array<int, NOTE_LENGTH> &notes) {
	return *std::max_element(notes.begin(), notes.end());
}

inline int get_min_note(const std::array<int, NOTE_LENGTH> &notes) {
	return *std::min_element(notes.begin(), notes.end());
}

std::array<int, NOTE_LENGTH> get_notes() {
	std::array<int, NOTE_LENGTH> notes = {};
	for (auto i = 0U; i < NOTE_LENGTH; ++i) {
		notes[i] = int_input("Veuillez entrer la note " + std::to_string(i + 1U) + " : ", 0, 20);
	}
	
	return notes;
}

void ex4() {
	auto notes = get_notes();
	auto average = get_average_of_notes(notes);
	auto max = get_max_note(notes);
	auto min = get_min_note(notes);
	
	std::cout << "La moyenne des notes est : " << average << '\n';
	std::cout << "La note minimale est : " << min << '\n';
	std::cout << "La note maximale est : " << max << '\n';
}
