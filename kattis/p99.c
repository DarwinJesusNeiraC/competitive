/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: p99
* @Descripcion:
*/

#include <stdio.h>
#include <math.h>

int main(){
  int x;
  scanf("%d", &x);
  if(x < 100){
    printf("%d", 99);
  }
  else{
    x += 0.1;
    x = floor(x/100);
    x = x*100;
    x = x - 1;
    printf("%d", x);
  }
  return 0;
}

