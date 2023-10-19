#include <iostream>
#include <stdio.h>

using namespace std;

struct Carro
{
    string modelo;
    string cor;
    int ano;
    int pot; 
};


int main(int argc, char const *argv[])
{

    Carro car1;

    car1.modelo = "Civic";
    car1.pot = 350;
    car1.cor = "Prata";
    car1.ano = 2013;

    Carro car2;
     
    car2.modelo = "Golf";
    car2.pot = 250;
    car2.cor = "Branco";
    car2.ano = 2010;


    Carro car3;

    car3.modelo = "Corolla";
    car3.pot = 280;
    car3.cor = "Cinza";
    car3.ano = 2018;

   int a;
   printf("\n Digite 1......Civic: \n");
   printf("\n Digite 2......Golf: \n");
   printf("\n Digite 3......Corolla: ");
   scanf("\t %d", &a);

   if(a == 1){
   cout << "Nome do modelo: " << car1.modelo << "\n";
   cout << "Cor: " << car1.cor << "\n";
   cout << "Ano: " << car1.ano << "\n";
   cout << "Potencia: " << car1.pot << "\n";
   }

    if(a == 2){
   cout << "Nome do modelo: " << car2.modelo << "\n";
   cout << "Cor: " << car2.cor << "\n";
   cout << "Ano: " << car2.ano << "\n";
   cout << "Potencia: " << car2.pot << "\n";
   }

    if(a == 3){
   cout << "Nome do modelo: " << car3.modelo << "\n";
   cout << "Cor: " << car3.cor << "\n";
   cout << "Ano: " << car3.ano << "\n";
   cout << "Potencia: " << car3.pot << "\n";
   }


    return 0;
}
