#include "BBS.h"
#include <iostream>
#include <cmath>
#include "Funciones Matematicas.h"
#include <NTL/ZZ.h>
using namespace NTL;
using namespace std;
    BBS::BBS(ZZ p, ZZ q, ZZ s)
    {
        this->p = p;
        this->q = q;
        this->seed = s;
        M = p * q;
        actual = s;
    }

    ZZ BBS::getrandom()
    {
        ZZ r = to_ZZ(fmod(to_int(actual*actual),to_int(M)));
        actual = r;
        return r;
    }
    ZZ BBS::getirandom(int i)
    {
        ZZ g = modulo(p, q);
        ZZ lcm = p * q / g;
        ZZ exp = to_ZZ(1);
        for(int j = 1; j <= i; ++j){
            exp = to_ZZ(fmod(to_long(exp+exp),to_long(lcm)));
        }
        ZZ x0 = seed * seed;
        ZZ r = x0;
        for(int j = 2; j <= to_int(exp); ++j){
            r = to_ZZ(fmod(to_long(r*x0),to_long(M)));
        }
        return r;
    }
