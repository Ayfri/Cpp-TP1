#ifndef TP1_INPUTS_HPP
#define TP1_INPUTS_HPP

#include <string>

/**
 * Il prend une chaîne et deux entiers comme arguments. Il demande ensuite à l'utilisateur d'entrer un nombre. Si le nombre
 * est compris entre les deux entiers, il renvoie le nombre. Si ce n'est pas le cas, il demande à l'utilisateur de saisir à
 * nouveau un numéro.
 *
 * @param message Le message à afficher à l'utilisateur.
 * @param min la valeur minimale que l'utilisateur peut entrer.
 * @param max La valeur maximale que l'utilisateur peut entrer.
 *
 * @return le numéro entré par l'utilisateur.
 */
int int_input(const std::string &message = "", const int &min = 0, const int &max = INT_MAX);

#endif //TP1_INPUTS_HPP
