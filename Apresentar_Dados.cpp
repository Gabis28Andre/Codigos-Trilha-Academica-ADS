#include <iostream>

using namespace std;

int main()
{
    char nome[30];
    char endereco[30];
    int idade;
    
    printf("Digite seu nome \n");
    scanf("%s", &nome);
    
     printf("Digite seu Endereço \n");
    scanf("%s", &endereco);
    
     printf("Digite sua Idade \n");
    scanf("%d", &idade);
    
    printf("\n Nome: %s", nome);
    printf("\n Endereço: %s", endereco);
    printf("\n Idade: %d", idade);
    
    printf("\n ");
    printf("\n ");
    
    return 0;
}
