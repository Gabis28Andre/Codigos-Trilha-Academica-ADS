#include <iostream>
#include <stdio.h>

using namespace std;

struct Carro
{
    string modelo;
    string cor;
    int ano;
    int pot; 
    int velMax;
    int vel;

  void insere(string stmodelo, string stcor, int stano, int stpot, int stvelMax, int stvel) {
    modelo = stmodelo;
    cor = stcor;
    ano = stano;
    pot = stpot;
    velMax = stvelMax;
    vel = 0;
  }

  void mostra(){
   

   cout << "\n Nome do modelo: " << modelo << "\n";
   cout << "Cor: " << cor << "\n";
   cout << "Ano: " << ano << "\n";
   cout << "Potencia: " << pot << "\n";
   cout << "VelocidadeMax: " << velMax << "\n";
   cout << "Velocidade Atual: " << vel << "\n";

  }

  
  void movvel(int movimento){
    
  vel = movimento;

  if(vel > velMax) {
    vel = velMax;

  }

  if(vel < 0){
    vel = 0;
  }

 }

};

void escolha(){


   printf("\n Digite 1......Civic: \n");
   printf("\n Digite 2......Golf: \n");
   printf("\n Digite 3......Corolla: \t");
   

  

}

int main(int argc, char const *argv[])
{

    Carro car1, car2, car3;
    //modelo, cor, ano, potencia, velmax, vel
    car1.insere ("Civic", "Prata", 2013, 500, 213, 0);
    car2.insere ("Golf", "Branco", 2010, 300, 213, 40);
    car3.insere ("Corolla", "Cinza", 2018, 280, 213, 40);
    

    escolha();

     int a;
    scanf("\t %d", &a);

    if(a == 1){
    car1.mostra();
   }
   

    if(a == 2){
   car2.mostra();
   }

    if(a == 3){
   car3.mostra();
   }

printf("\n\n");
    return 0;
}
