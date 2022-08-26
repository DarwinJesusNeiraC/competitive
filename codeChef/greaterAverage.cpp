/*
 * @Autor: Darwin Neira Carrasco
 * @Email: dneirac@unsa.edu.pe
 * @File: greaterAverage
 * @Descripcion:
 */

#include<iostream>

using namespace std;

int main(){
  int t, a, b ,c;
  float average;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>a>>b>>c;
    average= (a+b)/2.0;
    if(average > c)
      std::cout << "YES" << std::endl;
    else
      std::cout << "NO" << std::endl;
  }
  return 0;
}

