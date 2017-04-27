#ifndef BBS_H
#define BBS_H
#include <iostream>
#include <cmath>
#include "Funciones Matematicas.h"
#include <NTL/ZZ.h>
using namespace NTL;
using namespace std;
class BBS
{
    ZZ p, q, M, seed, actual;
public:
    BBS(ZZ p, ZZ q, ZZ s);
    ZZ getrandom();
    ZZ getirandom(int i);
};
#endif // BBS_H
