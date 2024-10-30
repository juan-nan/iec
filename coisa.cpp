#include <stdio.h>
#include <string.h>

int main(void) {
  int matriz[3][3];
  int matrizresult[3]={0,0,0};

 
  

  for(int l=0;l<3;l++){
     for(int c=0;c<3;c++){
       printf("Digite para posicao[%d][%d]",l+1,c+1);
       scanf("%d",&matriz[l][c]);
  
     }
  }
  for (int c = 0; c < 3; c++) {
    for (int l = 0; l < 3; l++) {
      matrizresult[c] += matriz[l][c];
    }
  }

  for(int l=0;l<3;l++){
     for(int c=0;c<3;c++){
    printf("%d\t",matriz[l][c]);
     }
    printf("\n");
  }
  printf("Matriz modificada vai ficar: \n");
  
     for(int l=0;l<3;l++){
    printf("%d\t",matrizresult[l]);
     }
  
 
  return 0;
}