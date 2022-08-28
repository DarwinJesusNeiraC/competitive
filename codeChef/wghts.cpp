/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: wghts
* @Descripcion:
*/

#include<iostream>

using namespace std;

int main(){
  int t,w,x,y,z;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>w>>x>>y>>z;
    if((w==x) || (w==y) || (w==z))cout<<"YES"<<endl;
    else if((w==(x+y)) || (w==(x+z)) || (w==(y+z))) cout<<"YES"<<endl;
    else if(w == (x+y+z)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}

