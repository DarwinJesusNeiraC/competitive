/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: candydist
* @Descripcion:
*/

#include<iostream>

using namespace std;

int main(){
  int t,n,m;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n>>m;
    if(n%m==0){
      if((n/m) %2==0) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
  }

  return 0;
}

