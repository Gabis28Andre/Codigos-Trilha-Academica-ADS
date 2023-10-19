//programa para inserir valor duplicado com função recursiva

#include <iostream>



int main(int argc, char const *argv[])
{
    int numero[3];

    printf("\n\t Preencha o Vetor: \n");

    inserir(numero);

    printf("\n valor final: ");

    imprimir(numero);

    return 0;
}


void inserir(int a[]){//utilizando vetor como parametro e não retorna vetor

int i;

for(i=0; i<3; i++ ) 
 {
 printf("\n Digite o valor do indice: %d\n\t", i);
 scanf("%d", &a[i]); //

}

}

void imprimir(int b []){ // só utiliza o vetor como parametro não retorna nenhum vetor

int i;
for(i=0; i<3; i++){

    prinf("\n Numeros [%d], %d", i, (2*b[i]))

}

}
