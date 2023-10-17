#include <stdio.h>
#include <cstdlib>

int* Numero_aleatorio(){

static int a[10];
int s;

 for (s=0; s < 10; s++) {

    a[s] = rand();

    printf("a[%d] = %d \n", s, a[s]);

 }

return a;
}

int main(){

   Numero_aleatorio();

}