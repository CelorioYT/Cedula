# Cedula
Validación de una cedula a toda inviolable
#include <iostream>
#include <string.h>

using namespace std;

int main (){

    Regreso:

    char Cedula[10];

    cout<<"\n******* Sistema de Matriculaci"<<char(162)<<"n en Linea ******\n";
    cout<<"Digite la Cedula: ";
    cin>>Cedula;


    bool EsCorrecto = false;
    int Comprobar,C=0;

    C= strlen(Cedula);

    for (int i = 0; i < 10; i++)
    {
        Comprobar = Cedula[i];

        if (Comprobar<48 || Comprobar>57)
        {
            EsCorrecto = true;
            break;
        }
         
    }

    char Salir[2];

    if (EsCorrecto==true || C<9 || C>10)
    {
        cout<<"\nLa Cedula que Introduciste es Incorrecta...";
        cout<<char(168)<<"Quieres Volver a Intetarlo? \nIngresa SI o NO: ";
        cin>>Salir;
        strupr(Salir);
        if ((strcmp(Salir,"SI"))==0)
        {
            goto Regreso;
        }else{
            cout<<"\n----------- Haz Salido del Sistema Exitosamente -----------";
        }
        
    }else if (EsCorrecto==false && C==10)
    {
        cout<<"\nLa Cedula Que Introduciste es "<<Cedula;
        cout<<"\nCedula Correctamente...";
        cout<<char(168)<<"Quieres Volver a Intetarlo? \nIngresa SI o NO: ";
        cin>>Salir;
        strupr(Salir);
        if ((strcmp(Salir,"SI"))==0)
        {
            goto Regreso;
        }else{
            cout<<"\n------------ Haz Salido del Sistema Exitosamente --------------";
        }
   
    }
    
    
    cout<<"\n\n";
    system("pause");
    return 0;
}
