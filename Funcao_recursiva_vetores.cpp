#include <iostream>

void inserir(int a[]){//utilizando vetor como parametro e não retorna vetor

int i;

for(i=0; i<3; i++ ) 
 {
 printf("\n Digite o valor %d\n", i);
 scanf("%d", &a[i]); //

}

}

int main(int argc, char const *argv[])
{
    int numero[3];

    printf("\n\t Preencha o Vetor: \n");


    inserir(numero);

    return 0;
}
