/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: p2048
* @Descripcion:
*/

#include <stdio.h>

int main(){
  int arr[5][4];
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      //arr[i][j]=1;
      scanf("%d", &arr[i][j]);
    }
  }
  scanf("%d", &arr[4][1]);
  //arr[4][1] = 0;
  int x = arr[4][1];
  if(x == 0){
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
 
      }
    }

  }
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  printf("%d\n", arr[4][1]);
  return 0;
}

