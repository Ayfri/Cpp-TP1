#include <iostream>
#include <conio.h>
#include "./exercices/ex1.hpp"
#include "./exercices/ex2.hpp"
#include "./utils.hpp"

#ifndef TP1_MENU_HPP
#define TP1_MENU_HPP

/**
 * Prend un entier en entrée et exécute l'exercice correspondant.
 *
 * @param n le numéro de l'exercice à exécuter.
 */
inline void runExercice(int n);

/**
 * Affiche la liste des exercices.
 */
void show_exercices_list();

/**
 * Affiche le menu, demande à l'utilisateur de choisir un exercice, exécute l'exercice, affiche à nouveau le menu après.
 * L'utilisateur peut quitter le programme en écrivant "exit".
 */
void show_menu();

#endif //TP1_MENU_HPP
