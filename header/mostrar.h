#ifndef MOSTRAR_H_INCLUDED
#define MOSTRAR_H_INCLUDED

#include "funciones.h"
void mostrar()
{
    int cont=0;
    float num;
    FILE *p;
    if(buscar_arch_numeros()==-1)
    {
        return;
    }
    p=fopen("datos/numeros.dat","rb");
    while(fread(&num,sizeof(float),1,p)==1)
    {
        cont++;
        cout<<"Numero "<<cont<<":  "<<num<<endl;
    }
    fclose(p);
}

void cerrar_programa()
{
    cout<<endl<<endl<<endl;
    cout<<"\t""\t""\t""Gracias por Usar ESTADISTICAS!!"<<endl;
    cout<<"\t""\t""\t""-------------------------------"<<endl<<endl<<endl;
    cout<<"\t""\t""\t""Version 1.0 --> 5/11/2010"<<endl<<endl;
    cout<<"\t""\t""\t""Programa Hecho por Luke92"<<endl;
    cout<<"\t""\t""\t""Para la Materia Probabilidad y Estadisticas"<<endl;
    cout<<"\t""\t""\t""Del Profesor Adrian Marcelo Canzian"<<endl;
    cout<<"\t""\t""\t""De la Universidad Tecnologica Nacional"<<endl;
    cout<<"\t""\t""\t""Facultad Regional General Pacheco"<<endl<<endl<<endl<<endl;
    cout<<"\t""\t""\t""Contacto: lucasjv92@gmail.com"<<endl;
    cout<<"\t""\t""\t""---------"<<endl<<endl;
    cout<<"\t""\t""\t""Legajo: 15510"<<endl;
    cout<<"\t""\t""\t""Nombre y Apellido: Lucas Vargas ";

    system("pause>null");
    exit(1);

}
#endif // MOSTRAR_H_INCLUDED
