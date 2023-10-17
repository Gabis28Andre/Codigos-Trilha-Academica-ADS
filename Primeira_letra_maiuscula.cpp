#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

char nome [30];
int i;

printf("\n Digite o sobrenome do aluno ou aluna: \n");

getsubopt(nome);

for(i=0; nome[i]!=' ', i++)

nome[i] = toupper (nome[i]);

printf("\n Sobrenome convertido: %s \n \n",nome );

getch();


return 0;
}