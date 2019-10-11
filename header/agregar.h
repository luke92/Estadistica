#ifndef AGREGAR_H_INCLUDED
#define AGREGAR_H_INCLUDED

#include "funciones.h"
void agregar(int n)
{
    FILE *p;
    float *numero;
    int i;
    numero=(float *)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        cout<<"Numero "<<i+1<<":  ";
        cin>>numero[i];
    }
    p=fopen("datos//numeros.dat","ab");
    if(p==NULL)
    {
        system("mkdir datos");
        p=fopen("datos//numeros.dat","ab");
    }
    fwrite(numero,sizeof(float),n,p);
    fclose(p);
    cout<<endl;
    cout<<"Numeros guardados con exito!";
    free(numero);
}


#endif // AGREGAR_H_INCLUDED
