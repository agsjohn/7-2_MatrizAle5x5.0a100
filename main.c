#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALE 101
#define MAX 5

main() {
  int c, l, m[MAX][MAX], cont = 0;
  int vetl[MAX], vetc[MAX];
  srand(time(NULL));
  for(l = 0; l < MAX; l++){
    for(c = 0; c < MAX; c++){
      m[l][c] = rand() % ALE;
    }
  }
  for(l = 0; l < MAX; l++){
    for(c = 0; c < MAX; c++){
      cont = cont + m[l][c];
    }
    vetl[l] = cont;
    cont = 0;
  }
  for(c = 0; c < MAX; c++){
    for(l = 0; l < MAX; l++){
      cont = cont + m[l][c];
    }
    vetc[c] = cont;
    cont = 0;
  }
  printf("\nMatriz: \n");
  for (l = 0; l < MAX; l++) {
    for (c = 0; c < MAX; c++) {
      if (c < MAX - 1) {
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  printf("Vetor da soma das linhas: ");
  for(l = 0; l < MAX; l++){
    if(l == MAX - 1){
      printf("%i", vetl[l]);
    }
    else{
      printf("%i - ", vetl[l]);
    }
  }
  printf("\nVetor da soma das colunas: ");
  for(l = 0; l < MAX; l++){
    if(l == MAX - 1){
      printf("%i", vetc[l]);
    }
    else{
      printf("%i - ", vetc[l]);
    }
  }
  getchar();
}