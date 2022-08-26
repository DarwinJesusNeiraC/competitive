/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: carTrip
* @Descripcion:
*/

#include<iostream>

using namespace std;

int main(){
  int t,x,price;
  cin>>t;
  for(int i=0;i<t;i++){
    price=3000;
    cin>>x;
    if(x>300){
      x-=300;
      price+=x*10;
    }
    cout<<price<<endl;
  }
  return 0;
}

