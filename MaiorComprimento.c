#include <stdio.h>
#include <stdlib.h>

int maiorPalavra(char *stringEntrada);

int main (void)
{
  char stringEntrada[100];
  fgets(stringEntrada, 100, stdin);
  int tamanho = maiorPalavra(stringEntrada);
  printf("%d",tamanho);
  printf("\n");  
  return 0;
}

int maiorPalavra(char *stringEntrada){
    int contador = 0, maiorString = 0;
    for(int i = 0; i < 100; i++){
        contador++;
        if(stringEntrada[i+1] == ' ' || stringEntrada[i+2] == '\0'){
            if(contador > maiorString){
                maiorString = contador;
            }
            i++;
            contador = 0;
            
        }
        if(stringEntrada[i+1] == '\0'){
            break;
        }
    }
    return maiorString;
}