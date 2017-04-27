#include <iostream>
#include <NTL/ZZ.h>
#include <string>
#include <Cesar.h>
#include <Afin.h>
#include <Rail Fence.h>
#include "RSA.h"
#include "PRNG.h"
#include <time.h>
using namespace std;
using namespace NTL;

int main()
{
    srand(time(NULL));
    string texto_plano = "Mango";
    RSA Receptor; //pepe
    ZZ clave_publica = Receptor.get_clave_publica();
    RSA Emisor(clave_publica); //Juan
    string texto_cifrado = Receptor.cifrar(texto_plano);
    cout << Receptor.descifrar(texto_cifrado);

    //Cesar
    /*Cesar cesar(4);
    string texto2 = "neo mango wango";
    cout << cesar.cifrar(texto2);*/

    //Afin

    /*string texto_plano_emisor = "Hola como estas";
    string texto_cifrado_emisor;
    Afin Emisor;
    texto_cifrado_emisor = Emisor.cifrar(texto_plano_emisor);
    cout << texto_cifrado_emisor << endl;

    string texto_cifrado_receptor = "MFfYdBLYdBqudUwfom,qudwfuqLFuqdUfbLfodfumYWiBduqmFfQfbqUuqWoqFdUfkLoduqmFdbdUwfiFfdo,mkqBYmfLUfiFfumF iFBmfWkLUukqBmfbLfqFUBkiuuqmFLUfmfkL,odUfNqLFfbLsqFqbdUwfmkbLFdbdUfQfsqFqBdUfDiLfWLkYqBLfooLSdkfdfudNmfiFdfduBqSqbdbfYLbqdFBLfWdUmUfUiuLUqSmUfDiLfFmf,LFLkLFfbibdUfdfDiqLFfbLNdfJduLkfbquJdfduBqSqbdbPfcdbmUfiFfLUBdbmfqFquqdofQfiFdfLFBkdbdwfUq,iqLFbmfomUfWdUmUfUiuLUqSmUfULfooL,dfdfiFfLUBdbmfsqFdofQfULfmNBqLFLfiFdfUmoiuqmF"";
    string texto_plano_receptor;
    long long clave_publica_receptor, clave_b_receptor;
    clave_publica_receptor = 9;
    clave_b_receptor = 74;
    Afin Receptor(clave_publica_receptor, clave_b_receptor);
    texto_plano_receptor = Receptor.descifrar(texto_cifrado_receptor);
    cout << texto_plano_receptor << endl;*/

    //Rail Fence

    /*string texto1 = "holacomoestas";
    int clave;
    cout << "Ingrese la clave mayor a 1: " << endl;
    cin >> clave;
    cout << cifrar_railfence(clave, texto1);
    string texto2 = "hmsoooalcetas";
    cout << descifrar_railfence(4,texto2);*/
    //cout << inversa(23,256);

}
