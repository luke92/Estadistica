#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED


#include "agregar.h"
#include "mostrar.h"
#include "borrar.h"
#include "intervalos.h"

void menu()
{
    char opc;
    int num;
    cout<<endl;
    cout<<"\t""\t""E  S  T  A  D  I  S  T  I  C  A  S"<<endl;
    cout<<"\t""\t""----------------------------------"<<endl<<endl;
    Sleep(500);
    cout<<"\t""\t""\t""Powered by Luke92"<<endl;
    cout<<"\t""\t""\t""-----------------"<<endl;
    cout<<"\t""\t""\t""   Version 1.0"<<endl;
    cout<<"\t""\t""\t""   -----------"<<endl<<endl;
    cout<<endl<<endl;
    Sleep(200);
    cout<<"\t""Menu Principal:"<<endl;
    cout<<"\t""---------------"<<endl<<endl;
    Sleep(100);
    cout<<"\t""1) Ingresar Numeros"<<endl;
    Sleep(100);
    cout<<"\t""2) Asignar intervalos manualmente"<<endl;
    Sleep(100);
    cout<<"\t""3) Determinar intervalos"<<endl;
    Sleep(100);
    cout<<"\t""4) Mostrar numeros cargados"<<endl;
    Sleep(100);
    cout<<"\t""5) Borrar numeros"<<endl;
    Sleep(100);
    cout<<"\t""6) Cerrar Programa"<<endl;
    cout<<endl;
    cout<<"\t""Ingrese Opcion:  ";
    opc=getch();
    system("cls");
    switch (opc)
    {
        case '1' : cout<<"Ingrese la cantidad de numeros a agregar:  ";
                    cin>>num;
                    agregar(num);
                    break;

        case '2' : man_intervalos();
                    break;

        case '3' : auto_intervalos();
                    break;

        case '4' : mostrar();
                    break;

        case '5' : borrar_numeros();
                    break;

        case '6' : cerrar_programa();
                    break;

        default: cout<<"Opcion Incorrecta  ";

                    break;
    }
    system("pause>null");
    system("cls");
}
#endif // MENU_H_INCLUDED
