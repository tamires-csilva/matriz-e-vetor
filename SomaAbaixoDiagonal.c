#include <stdio.h>
#include <stdlib.h>
#define MAX 200
int somaAbaixoDiagonal(int *matrizSomar, int tamanhoMatriz);

int main (void)
{
  int tamanhoMatriz;

  scanf("%d", &tamanhoMatriz);

  int matrizSomar[tamanhoMatriz][tamanhoMatriz];

  for(int i=0; i<tamanhoMatriz; i++){
    for(int j = 0; j< tamanhoMatriz; j++){
        scanf("%d", &matrizSomar[i][j]);
    }
  }
  int resultado = somaAbaixoDiagonal(*matrizSomar,tamanhoMatriz);
  printf("%d", resultado);
  printf("\n");  
  return 0;
}

int somaAbaixoDiagonal(int *matrizSomar, int tamanhoMatriz){
    int resultadoSoma = 0;
    for(int k=0; k<tamanhoMatriz ; k++){
        for(int m=0; m<tamanhoMatriz; m++){
            if(k == m){
                break;
            }
            else{
                resultadoSoma += matrizSomar[k * tamanhoMatriz + m];                
            }
        }
    }
    return resultadoSoma;  
}