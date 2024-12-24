#include <stdio.h>
#include <string.h>

struct tipoFuncionario{
        char nome[30];
        float salario;
        char funcao[20];
        char setor[30];
};

struct tipoEspecieDeArvore{
     char nomeCientifico[30];
    char nomePopular[20];
};


typedef struct viraTipo{
    int idade
} viraTipo;

struct tipoArvoreCatalogada{
    struct tipoEspecieDeArvore especie;
    unsigned short int idade;
    float altura;
    float diametroDoTronco; 
};

int main(){
    struct tipoFuncionario x,y,z;
    struct tipoArvoreCatalogada a;
    viraTipo exemplo;

    scanf("%c",x.nome);
    scanf("%f",&x.salario);

    x.salario = 4400.00 * 2.0; 

    y = x;

    strcpy(a.especie.nomeCientifico,"especia bla bla");

    scanf("%c",a.especie.nomePopular);

    printf("%f",x.salario);

}
