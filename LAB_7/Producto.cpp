//
// Created by jlpereira on 11/23/18.
//

#include "Producto.h"

Producto::Producto() {}

Producto::Producto(const string &nombre, int peso, const string &fragil_s_n) : nombre(nombre), peso(peso),
                                                                               fragil_s_n(fragil_s_n) {}

const string &Producto::getNombre() const {
    return nombre;
}

void Producto::setNombre(const string &nombre) {
    Producto::nombre = nombre;
}

int Producto::getPeso() const {
    return peso;
}

void Producto::setPeso(int peso) {
    Producto::peso = peso;
}

const string &Producto::getFragil_s_n() const {
    return fragil_s_n;
}

void Producto::setFragil_s_n(const string &fragil_s_n) {
    Producto::fragil_s_n = fragil_s_n;
}

Producto::~Producto() {
}
