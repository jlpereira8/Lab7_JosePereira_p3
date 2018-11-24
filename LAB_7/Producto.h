//
// Created by jlpereira on 11/23/18.
//

#ifndef LAB_7_PRODUCTO_H
#define LAB_7_PRODUCTO_H

#include "string"
using std::string;


class Producto {
private:
    string nombre;
    int peso;
    string fragil_s_n;
public:
    Producto();

    Producto(const string &nombre, int peso, const string &fragil_s_n);

    virtual ~Producto();

    const string &getNombre() const;

    void setNombre(const string &nombre);

    int getPeso() const;

    void setPeso(int peso);

    const string &getFragil_s_n() const;

    void setFragil_s_n(const string &fragil_s_n);
};


#endif //LAB_7_PRODUCTO_H
