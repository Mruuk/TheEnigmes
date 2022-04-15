#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int function(int id);
int alocacao(int id);

main(){
    setlocale(LC_ALL, "Portuguese");

    int *id;

    alocacao(id);

    printf("Digite sua idade: ");
    scanf("%i", &id);

    printf("Sua idade em dias é igual a: %i",function(id));
}

int alocacao(int id){

    id = (int*) malloc(sizeof(int));
    if( id == 0){
        printf("Memória insuficiente");
        exit(1);
    }

}

int function(int id){

    int dias=0;

    dias = id*360;

    return(dias);

    free(id);
}
