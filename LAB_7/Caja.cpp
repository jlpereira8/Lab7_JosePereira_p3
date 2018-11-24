//
// Created by jlpereira on 11/23/18.
//

#include "Caja.h"

Caja::Caja() {}



const vector<Producto> &Caja::getProductos() const {
    return productos;
}

void Caja::setProductos(const vector<Producto> &productos) {
    Caja::productos = productos;
}

const string &Caja::getFragil() const {
    return fragil;
}

void Caja::setFragil(const string &fragil) {
    Caja::fragil = fragil;
}

int Caja::getPeso_tot() const {
    return peso_tot;
}

void Caja::setPeso_tot(int peso_tot) {
    Caja::peso_tot = peso_tot;
}

void Caja::addProducto(const Producto &pro) {
    productos.push_back(pro);
}

Caja::Caja(const string &fragil, int peso_tot) : fragil(fragil), peso_tot(peso_tot) {}
