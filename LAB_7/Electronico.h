//
// Created by jlpereira on 11/23/18.
//

#ifndef LAB_7_ELECTRONICO_H
#define LAB_7_ELECTRONICO_H


#include "Producto.h"

class Electronico : public Producto{
public:
    Electronico(const string &nombre, int peso, const string &fragil_s_n);
};


#endif //LAB_7_ELECTRONICO_H
