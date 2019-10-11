#ifndef INTERVALOS_H_INCLUDED
#define INTERVALOS_H_INCLUDED

#include "funciones.h"

void man_intervalos()
{
    float max,min,r,li,num,inter,cant;
    if(buscar_arch_numeros()==-1)
    {
        return;
    }
    cout<<endl<<"\t""\t""Cuantos Intervalos desea tener? ";
    cin>>num;
    cout<<endl;
    min=get_min();
    max=get_max();
    r=max-min;
    li=r/num;
    inter=cant_intervalos(min,max,li);
    cant=contar_registros();

    cout<<"\t""\t""Minimo: "<<min<<endl;
    cout<<"\t""\t""Maximo: "<<max<<endl;
    cout<<"\t""\t""Numeros: "<<cant<<endl;
    cout<<"\t""\t""Rango: "<<r<<endl;
    cout<<"\t""\t""Longitud del Intervalo: "<<li<<endl;
    cout<<"\t""\t""Numero de Intervalos: "<<inter<<endl<<endl<<endl;

    comparar(inter,li,min,max,cant);

}

void auto_intervalos()
{
    float max=0,min=0,r=0,li=0,num=0,inter=0,cant=0;
    if(buscar_arch_numeros()==-1)
    {
        return;
    }
    min=get_min();
    max=get_max();
    cant=contar_registros();
    r=max-min;
    num=sqrt(cant);
    li=r/num;
    inter=cant_intervalos(min,max,li);

    cout<<endl<<"\t""\t""Minimo: "<<min<<endl;
    cout<<"\t""\t""Maximo: "<<max<<endl;
    cout<<"\t""\t""Numeros: "<<cant<<endl;
    cout<<"\t""\t""Rango: "<<r<<endl;
    cout<<"\t""\t""Raiz de cant numeros: "<<num<<endl;
    cout<<"\t""\t""Longitud del Intervalo: "<<li<<endl;
    cout<<"\t""\t""Numero de Intervalos: "<<inter<<endl<<endl<<endl;

    comparar(inter,li,min,max,cant);
}




#endif // INTERVALOS_H_INCLUDED
