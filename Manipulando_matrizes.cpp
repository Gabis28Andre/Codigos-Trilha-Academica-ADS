#include <iostream>

int main(){

int linha, coluna;

int matriz [2] [2];

for(linha=0; coluna <=2; linha++) {

 for(coluna=0; linha <=2; coluna++) {

  printf("\n Digite os valores da matriz para a linha %d, e coluna %d", linha +1, coluna +1);
  scanf("%d", &matriz [linha][coluna]);
  
 }

}

for(linha=0; linha <=2; linha++){

    for(coluna=0; coluna<=2; linha++){
     
      printf("%d \t\n", matriz[linha][coluna]);
      printf("\n Veja a sua Matriz: \n");
      printf("\n\n");
      
    }

}

system("pause");
return 0;
}