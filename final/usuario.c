#include "ArrayList.h"
#include "tema.h"
#include "usuario.h"
#include "stdio.h"

int parser_parseUsuario(char* fileName, ArrayList* usuario)
{

    FILE *fp;
    eUsuario* unUsuario;

    char idAux[20];
    char nombre[30];
    char email[50];
    char sexo;
    char pais[20];
    char password[20];
    char ipAddres[50];
    int cant;

    int retorno=-1;
    fp = fopen(fileName,"r");
    if(fp!=NULL)
    {
        while(!feof(fp))
        {
            unUsuario=(eUsuario*)malloc(sizeof(eUsuario));
            if(unUsuario!=NULL)
            {
                if(feof(fp))
                {
                    break;
                }
                cant=fscanf(fp,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", idAux,nombre,email,sexo,pais,password,ipAddres);
                if(cant==7)
                {
                    unUsuario->id=atoi(idAux);
                    strcpy(unUsuario->nombre,nombre);
                    strcpy(unUsuario->email,email);
                    strcpy(unUsuario->sexo,sexo);
                    strcpy(unUsuario->pais,pais);
                    strcpy(unUsuario->password,password);
                    strcpy(unUsuario->ipAddres,ipAddres);

                    usuario->add(usuario,unUsuario);
                    retorno=1;
                }
                else
                    printf("error al leer con fscanf\n");
            }
        }

    }
    else
        printf("no se pudo leer");

    fclose(fp);
    return retorno;
}

int menuModifica()
{
    int opcion;

    system("cls");
    printf("Modificar pelicula \n\n");
    printf("1-Titulo\n");
    printf("2-Genero\n");
    printf("3-Descripcion\n");
    printf("4-Duracion\n");
    printf("5-Puntaje\n");
    printf("6-Link de imagen\n");
    printf("7-salir\n");

    printf("\nIndique opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
int ordenarPorNombre(void* usuarioA,void* usuarioB)
{
    int returnAux=0;
    if(strcmp(((eUsuario*)usuarioA)->email , ((eUsuario*)usuarioB)->email)<0)
    {
        returnAux=1;
    }
    if(strcmp(((eUsuario*)usuarioA)->email , ((eUsuario*)usuarioB)->email)>0)
    {
        returnAux=-1;
    }
    return returnAux;
}
