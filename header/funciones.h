#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
int buscar_arch_numeros()
{
    FILE *p;
    p=fopen("datos//numeros.dat","rb");
    if(p==NULL)
    {
        cout<<"No hay numeros cargados";
        return -1;
    }
    fclose(p);
    return 1;
}


float get_max()
{
    float num=0,max=0;
    int cont=0;
    FILE *p;
    p=fopen("datos//numeros.dat","rb");
    while(fread(&num,sizeof(float),1,p)==1)
    {
        if(cont==0)
        {
            max=num;
        }
        else
        {
            if(num>max) {max=num;}
        }
        cont++;
    }
    fclose(p);
    return max;
}

float get_min()
{
    float num=0,min=0;
    int cont=0;
    FILE *p;
    p=fopen("datos//numeros.dat","rb");
    while(fread(&num,sizeof(float),1,p)==1)
    {
        if(cont==0)
        {
            min=num;
        }
        else
        {
            if(num<min) {min=num;}
        }
        cont++;
    }
    fclose(p);
    return min;
}

float cant_intervalos (float min,float  max,float li)
{
    int cont=0;
    float num;
    num=min;
    while(max>num)
    {
        cont++;
        num+=li;
    }
    return cont;
}

float contar_registros()
{
    int cont=0;
    float num;
    FILE *p;
    p=fopen("datos//numeros.dat","rb");
    while(fread(&num,sizeof(float),1,p)==1)
    {
        cont++;
    }
    fclose(p);
    return cont;
}

void comparar (float inter,float li,float min,float max,float cant)
{
    FILE *p;
    int i,j;
    float num1=0,num2=0,resultado=0;
    float *numero;
    p=fopen("datos//numeros.dat","rb");
    numero=(float *)malloc(inter*sizeof(float));
    fread(numero,sizeof(float),cant,p);
    num1=min;
    num2=min+li;
    for(i=0;i<inter;i++)
    {
        resultado=0;
        if(i==(inter-1))
        {
            cout<<"\t""Intervalo ["<<num1<<" ; "<<num2<<" ]: ";
        }
        else
        {
            cout<<"\t""Intervalo ["<<num1<<" ; "<<num2<<" ): ";
        }
        for(j=0;j<cant;j++)
        {
            if(i==(inter-1))
            {
                if(numero[j]==max)
                {
                    resultado++;
                }
            }
                if((numero[j]>=num1) && (numero[j]<num2))
                {
                    resultado++;
                }
            }

        cout<<resultado<<endl<<endl;
        num1=num2;
        num2+=li;
    }
    free(numero);
    fclose(p);
}






#endif // FUNCIONES_H_INCLUDED
