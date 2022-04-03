#include <iostream>
#include <string>
#include <random>
#include "../inputs.hpp"

#pragma once

/**
 * Jouez une partie du jeu du Nombre Mystère.
 * L'utilisateur doit deviner un nombre aléatoire entre une valeur minimale et une valeur maximale
 *
 * @param minmax La plage de nombres que l'utilisateur peut deviner.
 * @param random_number Le nombre que le joueur doit deviner.
 */
void play_game(const int &minmax, const int &random_number);
void ex5();
