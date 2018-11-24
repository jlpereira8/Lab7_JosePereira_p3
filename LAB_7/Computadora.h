//
// Created by jlpereira on 11/23/18.
//

#ifndef LAB_7_COMPUTADORA_H
#define LAB_7_COMPUTADORA_H

#include "string"
#include "Electronico.h"

using std::string;

class Computadora: public Electronico {
private:
    string sistema_op;
public:
    Computadora(const string &nombre, int peso, const string &fragil_s_n, const string &sistema_op);

    const string &getSistema_op() const;

    void setSistema_op(const string &sistema_op);

};


#endif //LAB_7_COMPUTADORA_H
