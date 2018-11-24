//
// Created by jlpereira on 11/23/18.
//

#ifndef LAB_7_VIDEOJUEGO_H
#define LAB_7_VIDEOJUEGO_H


#include "Electronico.h"

class Videojuego : public Electronico{
private:
    string desarollador;
public:
    Videojuego(const string &nombre, int peso, const string &fragil_s_n, const string &desarollador);
};


#endif //LAB_7_VIDEOJUEGO_H
