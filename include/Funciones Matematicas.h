#ifndef FUNCIONES MATEMATICAS_H
#define FUNCIONES MATEMATICAS_H
#include <vector>
#include <NTL/ZZ.h>
using namespace NTL;
ZZ modulo(ZZ a, ZZ n);
ZZ euclides(ZZ a, ZZ b);
ZZ mcd(ZZ a, ZZ b);
std::vector <ZZ> euclides_extendido(ZZ a, ZZ b);
ZZ inversa(ZZ a, ZZ alfabeto);
ZZ potencia(int a, ZZ b, int modu);
#endif // FUNCIONES MATEMATICAS_H
