#ifndef BORRAR_H_INCLUDED
#define BORRAR_H_INCLUDED

#include "funciones.h"

void borrar_numeros()
{
    char opc;
    int band=0;
    if(buscar_arch_numeros()==-1)
    {
        return;
    }
    while(band==0)
    {
        cout<<"Esta Seguro que quiere borrar todos los numeros? (S/N)?: ";
        cin>>opc;
        if((opc=='s') || (opc=='S'))
        {
            band=1;
            system("erase /Q datos\numeros.dat");
            cout<<"Numeros Borrados con exito!";
        }
        if((opc=='n') || (opc=='N'))
        {
            band=1;
            cout<<"Operacion Abortada con exito!";
        }
        if((opc=='n') && (opc=='N') && (opc=='s') && (opc=='S'))
        {
            cout<<"Opcion Incorrecta!";
            system ("pause>null");
            system("cls");
        }
    }
}



#endif // BORRAR_H_INCLUDED
