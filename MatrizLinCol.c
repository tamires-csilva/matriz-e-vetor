#include <stdio.h>
#include <stdlib.h>

int verificaLinCol(int *matrizSomar, int tamanhoMatriz);

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
  int resultado = verificaLinCol(*matrizSomar,tamanhoMatriz);
  printf("%d", resultado);
  printf("\n");  
  return 0;
}

int verificaLinCol(int *matrizEntrada, int tamanhoMatriz){
    int resultadoSoma = 0;
    for(int k=0; k<tamanhoMatriz ; k++){
        int flag = 0;
        int  contador= 0;
        for(int m=0; m<tamanhoMatriz; m++){
            if(matrizEntrada[k * tamanhoMatriz + m]!= 0){
                contador++;
            }
        }
        if(contador > 1){
            return 0;
        }
    }
    return 1;  
}