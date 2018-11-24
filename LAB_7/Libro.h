//
// Created by jlpereira on 11/23/18.
//

#ifndef LAB_7_LIBRO_H
#define LAB_7_LIBRO_H

#include "string"
#include "Producto.h"

using std::string;

class Libro :public Producto{
private:
    string codigo_ISBN;
public:
    Libro(const string &nombre, int peso, const string &fragil_s_n, const string &codigo_ISBN);

    const string &getCodigo_ISBN() const;

    void setCodigo_ISBN(const string &codigo_ISBN);

};


#endif //LAB_7_LIBRO_H
