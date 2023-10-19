//programa para inserir valor duplicado com função recursiva

#include <iostream>

void inserir(int a[]){//utilizando vetor como parametro e não retorna vetor

int i;

for(i=0; i<3; i++ ) 
 {
 printf("\n Digite o valor do indice [%d]: \t", i);
 scanf("%d", &a[i]); // função que escaneia o valor que vai ser recebido pelo indice na variavel i

}

}

void imprimir(int b []){ // só utiliza o vetor como parametro não retorna nenhum vetor

int i;
for(i=0; i<3; i++){ //função que apresenta os indices

    printf("\n Vetor [%d], %d", i, (2*b[i])); //função que dobra o valor que os indices recebem

}
 printf("\n\n"); //espaçamento só no final
}


int main(int argc, char const *argv[])
{
    int numero[3];

    printf("\n\t Preencha o Vetores para serem dobrados: \n");

    inserir(numero);

    printf("\n\t Valor dos Vetores: \n");

    imprimir(numero);

    return 0;
}


