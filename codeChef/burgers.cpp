/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: burgers
* @Descripcion:
*/

#include<iostream>

using namespace std;

int main(){
  int t,x,y;
  cin>>t;
  while(t--){
    cin>>x>>y;
    if(x<=y) cout<<x<<endl;
    else  cout<<y<<endl;
  }
  return 0;
}

