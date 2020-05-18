#include <stdio.h>
#include <stdlib.h>

int *inverteVetor(int *vetorInverter, int tamanhoVetor);

int main (void)
{
  int tamanhoVetor;

  scanf("%d", &tamanhoVetor);

  int vetorInverter[tamanhoVetor];

  for(int i=0; i<tamanhoVetor; i++){
    scanf("%d", &vetorInverter[i]);
  }
  int* vetorInvertido = inverteVetor(vetorInverter, tamanhoVetor);
  for(int k=0; k< tamanhoVetor; k++){
   printf("%d ",vetorInvertido[k]);
  }
  printf("\n");  
  return 0;
}

int *inverteVetor(int *vetorInverter, int tamanhoVetor){
    int *vetorInvertido= malloc(tamanhoVetor * sizeof(int)), regressivo = tamanhoVetor-1;
    for(int j=0; j<tamanhoVetor; j++){
        vetorInvertido[j] = vetorInverter[regressivo];
        regressivo--;
    }
    return vetorInvertido;  
}