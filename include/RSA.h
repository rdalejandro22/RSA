#ifndef RSA_H
#define RSA_H
#include <string>
#include <NTL/ZZ.h>
using namespace NTL;
class RSA
{
    std::string alfabeto = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ .,;";
    ZZ clave_publica, clave_privada, N;
    void generar_claves();
    public:
        RSA(ZZ clave_publica);
        RSA();
        ZZ get_clave_publica();
        std::string cifrar(std::string mensaje);
        std::string descifrar(std::string mensaje_cifrado);
};
#endif // RSA_H
