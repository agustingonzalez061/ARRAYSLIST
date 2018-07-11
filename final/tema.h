#ifndef TEMA_H_INCLUDED
#define TEMA_H_INCLUDED

typedef struct
{
    int id;
    char nombre[50];
    char artista[30];
}eCanciones;

int parserTemasBin(char* fileName, ArrayList* listaTemas);
int parser_parseTema(char* fileName, ArrayList* temas);
#endif // TEMA_H_INCLUDED
