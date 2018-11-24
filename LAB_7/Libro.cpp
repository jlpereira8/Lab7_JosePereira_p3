//
// Created by jlpereira on 11/23/18.
//

#include "Libro.h"

Libro::Libro(const string &nombre, int peso, const string &fragil_s_n, const string &codigo_ISBN) : Producto(nombre,
                                                                                                             peso,
                                                                                                             fragil_s_n),
                                                                                                    codigo_ISBN(
                                                                                                            codigo_ISBN) {}

const string &Libro::getCodigo_ISBN() const {
    return codigo_ISBN;
}

void Libro::setCodigo_ISBN(const string &codigo_ISBN) {
    Libro::codigo_ISBN = codigo_ISBN;
}
