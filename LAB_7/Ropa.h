//
// Created by jlpereira on 11/23/18.
//

#ifndef LAB_7_ROPA_H
#define LAB_7_ROPA_H


#include "Producto.h"

class Ropa : public Producto{
private:
    string tipo_ropa;
public:
    Ropa(const string &nombre, int peso, const string &fragil_s_n, const string &tipo_ropa);

    const string &getTipo_ropa() const;

    void setTipo_ropa(const string &tipo_ropa);


};


#endif //LAB_7_ROPA_H
