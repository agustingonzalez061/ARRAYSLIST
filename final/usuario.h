#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED

typedef struct
{
    int id;
    char nombre[30];
    char email[50];
    char sexo;
    char pais[20];
    char password[20];
    char ipAddres[50];
}eUsuario;

int parser_parseTema(char* fileName, ArrayList* temas);
#endif // USUARIO_H_INCLUDED
