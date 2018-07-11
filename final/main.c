#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "tema.h"
#include "usuario.h"
int main()
{
    // Definir lista de empleados
    ArrayList* temas=al_newArrayList();
    ArrayList* usuario=al_newArrayList();
    int opcion;
    int opcion1;
    int opcion5;
    char respuesta='s';
    if(parserTemasBin("temas.dat",temas)==1)
    {
        printf("archivo temas cargado con exito\n\n");
    }
    else
        printf("Error leyando temas\n");
    if(parser_parseUsuario("usuarios.dat",usuario)==1)
    {
        printf("archivo usuario cargado con exito\n\n");
    }
    else
        printf("Error leyando usuarios\n");
    do
    {
        opcion=0;
        printf("1.-Listar Usuarios\n2.-Listar Temas\n3.-Escuchar Tema\n4.-Guardar Estadistica\n5.-Informar\n6.-Salir\n\n");
        fflush(stdin);
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            printf("1.-ORDENAR POR NOMBRE\n2.-ORDENAR POR NACIONALIDAD Y NOMBRE");
            fflush(stdin);
            scanf("%d",&opcion1);

            switch(opcion1)
            {
            case 1:
                break;
            case 2:
                break;
            }
            break;
        case 2:
            break;

        case 3:

            break;
        case 4:

            break;
        case 5:
            printf("1.-TEMA MAS ESCUCHADO\n2.-TEMA MAS ESCUCHADO SEGUN NACIONALIDAD\n3.-AUTOR CON MAS REPRODUCCIONES\n4.-EL AUTOR CON MAS TEMAS\n");
            fflush(stdin);
            scanf("%d",&opcion5);
            switch(opcion5)
            {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;

            }
            break;
        case 6:
            respuesta='n';
            break;
        default:
            printf("opcion incorrecta");
        }
        system("pause");
        system("cls");
    }
    while(respuesta!='n');


    return 0;
}

