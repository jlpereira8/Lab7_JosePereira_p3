//
// Created by jlpereira on 11/23/18.
//

#include "Videojuego.h"

Videojuego::Videojuego(const string &nombre, int peso, const string &fragil_s_n, const string &desarollador)
        : Electronico(nombre, peso, fragil_s_n), desarollador(desarollador) {}
