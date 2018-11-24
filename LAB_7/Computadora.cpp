//
// Created by jlpereira on 11/23/18.
//

#include "Computadora.h"

Computadora::Computadora(const string &nombre, int peso, const string &fragil_s_n, const string &sistema_op)
        : Electronico(nombre, peso, fragil_s_n), sistema_op(sistema_op) {}

const string &Computadora::getSistema_op() const {
    return sistema_op;
}

void Computadora::setSistema_op(const string &sistema_op) {
    Computadora::sistema_op = sistema_op;
}
