/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: detscore
* @Descripcion:
*/

#include<iostream>

using namespace std;

int main(){
  int t,x,n;
  cin>>t;
  while(t--){
    cin>>x>>n;
    x/=10;
    cout<<x*n<<endl;
  }
  return 0;
}

