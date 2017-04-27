#include "RSA.h"
#include "PRNG.h"
#include <iostream>
#include <NTL/ZZ.h>
#include "Funciones Matematicas.h"
using namespace NTL;
using namespace std;
void RSA::generar_claves()
{
    ZZ p = ga(5,8,3,3);
    ZZ q = ga(5,8,2,4);
    while(ProbPrime(p,10)!=1)
    {
        p = ga(5,8,3,3);
    }
    cout << p << "p" << endl;
    while(ProbPrime(q,10)!=1)
    {
        q = ga(5,8,2,4);
    }
    cout << q << "q" << endl;
    N = p * q;
    ZZ phi_N = (p - 1) * (q - 1);
    ZZ e = ga(6,8,5,2);
    while(e > N || euclides(e, phi_N) != 1)
    {
        e = ga(6,8,5,2);
    }
    cout << e << endl;
    clave_publica = e;
    clave_privada = inversa(clave_publica, phi_N);
}
RSA::RSA(ZZ clave_publica) //EMISOR
{
    clave_publica = clave_publica;
}
RSA::RSA() //RECEPTOR
{
    generar_claves();
}
ZZ RSA::get_clave_publica()
{
    return clave_publica;
}
string RSA::cifrar(string mensaje)
{
    string mensaje_cifrado;
    int posicion, letra_cifrada, alfabeto_tam;
    alfabeto_tam = alfabeto.length();
    for(int i = 0; i < mensaje.length(); i++)
    {
        posicion = alfabeto.find(mensaje[i]);
        letra_cifrada = to_int(potencia(posicion, clave_publica, alfabeto_tam));
        mensaje_cifrado += alfabeto[letra_cifrada];
    }
    return mensaje_cifrado;
}
string RSA::descifrar(string mensaje)
{
    string mensaje_descifrado;
    int posicion, letra_cifrada, alfabeto_tam;
    alfabeto_tam = alfabeto.length();
    for(int i = 0; i < mensaje.length(); i++)
    {
        posicion = alfabeto.find(mensaje[i]);
        letra_cifrada = to_int(potencia(posicion, clave_privada, alfabeto_tam));
        mensaje_descifrado += alfabeto[letra_cifrada];
    }
    return mensaje_descifrado;
}
//OCOLA ES GAY
//LUIS GAY
