#include <stdio.h>
#include <cstdlib>

int* Numero_aleatorio(){

static int a[10];
int sequencia;

 for (sequencia=0; sequencia < 10; sequencia++) {

    a[sequencia] = rand();

    printf("a[%d] = %d \n", sequencia, a[sequencia]);

 }

return a;
}