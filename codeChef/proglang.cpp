/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: proglang
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t,a,b,x,y,q,w;
  cin>>t;
  while(t--){
    cin>>a>>b>>x>>y>>q>>w;
    if((a==x && b==y) || (a==y && b==x)) cout<<1<<endl;
    else if((a==w && b==q) || (a==q && b==w)) cout<<2<<endl;
    else cout<<0<<endl;
  }
  return 0;
}

