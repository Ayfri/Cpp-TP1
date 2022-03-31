#include <array>
#include <vector>
#include "../inputs.hpp"
#include <string>
#include <iostream>

#ifndef TP1_EX4_HPP
#define TP1_EX4_HPP

#define NOTE_LENGTH 10

/**
 * Renvoie la moyenne des notes
 *
 * @param notes un tableau de 10 entiers représentant les notes de l'élève.
 *
 * @return La moyenne des notes.
 */
double get_average_of_notes(const std::array<int, NOTE_LENGTH> &notes);

/**
 * Renvoie la valeur maximale du tableau
 *
 * @param notes un tableau de 10 entiers représentant les notes de la chanson.
 *
 * @return La valeur maximale du tableau.
 */
inline int get_max_note(const std::array<int, NOTE_LENGTH> &notes);

/**
 * Renvoie la valeur minimale du tableau.
 *
 * @param notes un tableau de 10 entiers représentant les notes de l'élève.
 *
 * @return La valeur minimale du tableau.
 */
inline int get_min_note(const std::array<int, NOTE_LENGTH> &notes);

std::array<int, NOTE_LENGTH> get_notes();

void ex4();

#endif //TP1_EX4_HPP
