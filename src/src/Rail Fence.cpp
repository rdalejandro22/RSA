#include "Rail Fence.h"
#include <string>
using namespace std;
string llenar_x(int clave, string maensaje)
{

}
string cifrar_railfence(int clave, string mensaje)
{
    int espacios1 = 2*clave - 2;
    int espacios2 = 0;
    string cifrado;
    for(int i = 0; i< clave; i++)
    {
        int posicion = i;
        cifrado += mensaje[posicion];
        while(posicion < mensaje.length())
        {
            if((posicion + espacios1) > mensaje.length())
            {
                break;
            }
            else if((posicion + espacios2) > mensaje.length())
            {
                break;
            }
            else if(espacios1 == 0)
            {
                cifrado += mensaje[posicion + espacios2];
                posicion += espacios2;
                continue;
            }
            cifrado += mensaje[posicion + espacios1];
            posicion += espacios1;
            if(espacios2 == 0)
            {
                continue;
            }
            cifrado += mensaje[posicion + espacios2];
            posicion += espacios2;

        }
        espacios1 -= 2;
        espacios2 +=2;
    }
    return cifrado;
}
string descifrar_railfence(int clave, string mensaje)
{
    string mensaje_descifrado;
    int espacios1 = 2*clave - 2;
    int espacios2 = 0;
    for(int i = 0; i < mensaje.length(); i++)
    {
        mensaje_descifrado += 'x';
    }
    int letra = 0;
    for(int i = 0; i < clave; i++)
    {
        int posicion = i;
        mensaje_descifrado[posicion] = mensaje[letra];
        letra++;
        while(posicion<mensaje.length())
        {
            if((posicion + espacios1) > mensaje.length())
            {
                break;
            }
            mensaje_descifrado[posicion + espacios1] = mensaje[letra];
            posicion += espacios1;
            letra++;
            if(espacios2 == 0)
            {
                continue;
            }
            mensaje_descifrado[posicion + espacios2] = mensaje[letra];
            posicion += espacios2;
            letra++;
        }
        espacios1 -= 2;
        espacios2 +=2;
    }
    return mensaje_descifrado;
}

