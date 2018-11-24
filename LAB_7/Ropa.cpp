//
// Created by jlpereira on 11/23/18.
//

#include "Ropa.h"

Ropa::Ropa(const string &nombre, int peso, const string &fragil_s_n, const string &tipo_ropa) : Producto(nombre, peso,
                                                                                                         fragil_s_n),
                                                                                                tipo_ropa(tipo_ropa) {}

const string &Ropa::getTipo_ropa() const {
    return tipo_ropa;
}

void Ropa::setTipo_ropa(const string &tipo_ropa) {
    Ropa::tipo_ropa = tipo_ropa;
}
