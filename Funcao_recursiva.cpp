#include <iostream>

using namespace std;

int fatorial(int valor){

if (fatorial != 1){

return valor * fatorial(valor - 1);

} else {

return valor;

}

}

int main(){

int n;
printf("\n Digite um numero: \n");
scanf("%d", &n);

fatorial(n);

printf("Resultado %d, e mais %d, valor de n %d", valor, fatorial(n), n);
return 0;
}

