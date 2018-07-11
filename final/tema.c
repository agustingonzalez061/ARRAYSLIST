#include "ArrayList.h"
#include "tema.h"
#include "usuario.h"
#include "stdio.h"

int parser_parseTema(char* fileName, ArrayList* temas)
{

    FILE *fp;
    eCanciones* unTema;

    char idAux[20];
    char artista[30];
    char nombre[50];
    int cant;

    int retorno=-1;
    fp = fopen(fileName,"r");
    if(fp!=NULL)
    {
        while(!feof(fp))
        {
            unTema=(eCanciones*)malloc(sizeof(eCanciones));
            if(unTema!=NULL)
            {
                if(feof(fp))
                {
                    break;
                }
                cant=fscanf(fp,"%[^,],%[^,],%[^\n]\n", idAux,nombre,artista);
                if(cant==3)
                {
                    unTema->id=atoi(idAux);
                    strcpy(unTema->nombre,nombre);
                    strcpy(unTema->artista,artista);

                    temas->add(temas,unTema);
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
/*
int parserTemasBin(char* fileName, ArrayList* listaTemas)
{
    FILE* b;
    int i;
    int returAux = -1;
    eCanciones * pTemas;
    b=fopen(fileName, "rb");
    if(b != NULL)
    {
        while(!feof(b))
        {
             pTemas=(eCanciones*)malloc(sizeof(eCanciones));
             if (pTemas != NULL)
             {
                 if(feof(b))
                {
                    break;
                }
                for(i = 0; feof(b)!= 0; i ++)
                {
                    fread(pTemas, sizeof(eCanciones),1,b);
                    listaTemas->add(listaTemas,pTemas);
                    returAux = 1;
                }
             }
        }
    }
   fclose(b);
   return returAux;
}
*/
