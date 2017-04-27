#include <Afin.h>
#include <Funciones Matematicas.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

typedef long long TIPO;

/*Afin::Afin()
{
    srand(time(NULL));
    TIPO clave_publica, clave_b;
    clave_publica = rand();
    clave_b = rand();
    clave_privada = inversa(clave_publica, alfabeto.length());
    while(mcd(clave_publica, alfabeto.length()) != 1)
    {
        TIPO clave_temp;
        clave_temp = rand();
        clave_publica = clave_temp;
    }
    this->clave_publica = clave_publica;
    this->clave_b = clave_b;
}

Afin::Afin(TIPO clave_publica, TIPO clave_b)
{
    this->clave_publica = clave_publica;
    this->clave_b = clave_b;
    clave_privada = inversa(clave_publica, alfabeto.length());
}

string Afin::cifrar(string mensaje)
{
    string mensaje_cifrado;
    TIPO posicion, letra_cifrada;
    for(TIPO i=0; i < mensaje.length(); i++)
    {
        posicion = alfabeto.find(mensaje[i]);
        letra_cifrada = (posicion * clave_publica + clave_b);
        if(letra_cifrada > alfabeto.length())
        {
            letra_cifrada = modulo(letra_cifrada, alfabeto.length());
        }
        mensaje_cifrado += alfabeto[letra_cifrada];
    }
    return mensaje_cifrado;
}

string Afin::descifrar(string mensaje)
{
    string mensaje_descifrado;
    TIPO posicion, letra_original;
    for(TIPO i = 0; i < mensaje.length(); i++)
    {
        posicion = alfabeto.find(mensaje[i]);
        letra_original = (clave_privada * (posicion - clave_b));
        if(letra_original > alfabeto.length() || letra_original < 0)
        {
            letra_original = modulo(letra_original, alfabeto.length());
        }
        mensaje_descifrado += alfabeto[letra_original];
    }
    return mensaje_descifrado;
}*/
