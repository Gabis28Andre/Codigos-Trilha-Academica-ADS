#include <iostream>

using namespace std;

int main(){

float salario, inss, ir, sal_liquido;

printf("Digite seu salario bruto: ");
scanf("%f", &salario);

if (salario <= 1693.72) {

inss = salario * 0.08;

}
else 

if(salario >= 1693.73 && salario <= 2822.90){

inss = salario * 0.09;

}

else 

if(salario >= 2822.91 && salario <= 5646.80){

inss = salario * 0.11;

}

else 

if(salario >= 5646.81){

inss = 621.04;

}
//abaixo calculo imposto de renda(ir)

if (salario <= 1903.98) {

ir = 0;

}
else 

if(salario >= 1903.98 && salario <= 2826.65){

ir = salario * 0.075;

}

else 

if(salario >= 2826.66 && salario <= 3751.05){

ir = salario * 0.15;

}

else 

if(salario >= 3751.06 && salario <= 4664.68){

ir = salario * 0.225;

}

else 

if(salario >= 4664.69){

ir = salario * 0.275;

}

sal_liquido = (salario - inss) - ir;

printf("\n Desconto INSS: %.2f \n", inss);

printf("\n Desconto Imposto de Renda: %.2f \n", ir);

printf("\n Salario Liquido : %.2f \n ", sal_liquido);

printf("\n");

printf("\n");

return 0;
}