

/*Situação Problema*/



#include <iostream>


int calcularMassa(float a, float b){

const float mA=321.43; 
const float mB= 150.72; //valores passados na questão

//calcular com pesos passados na questão
printf("\n 1,2 : 1,0 \t = %.3f", (1,2*mA+1*mB));
printf("\n 1,4 : 1,0 \t = %.3f", (1,4*mA+1*mB));
printf("\n 1,0 : 1,6 \t = %.3f \n", (1*mA+1,6*mB));


return (a* mA) + (b* mB);
}


int main(){

float a=0, b=0, resultado=0;

printf("\n Digite a massa do elemento A: ");
scanf("%f", &a);

printf("\n Digite a massa do elemento B: ");
scanf("%f", &b);

resultado = calcularMassa(a, b); //chamando a função

printf("\n\t Resultado: %.2f", resultado);
printf("\n\n");
printf("\n\n");

}

