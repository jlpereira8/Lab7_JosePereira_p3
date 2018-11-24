//
// Created by jlpereira on 11/23/18.
//

#ifndef LAB_7_CAJA_H
#define LAB_7_CAJA_H

#include "vector"
#include "Producto.h"
#include "string"

using std::string;
using std::vector;

class Caja {
private:
    vector<Producto> productos;
    string fragil;
    int peso_tot;
public:
    Caja();

    Caja(const string &fragil, int peso_tot);

    const vector<Producto> &getProductos() const;

    void setProductos(const vector<Producto> &productos);

    const string &getFragil() const;

    void setFragil(const string &fragil);

    int getPeso_tot() const;

    void setPeso_tot(int peso_tot);

    //sex

    void addProducto(const Producto &pro);
};


#endif //LAB_7_CAJA_H
