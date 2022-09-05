/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: airline
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
  if(((a+b)<=d && c<=e) || ((b+c)<=d && a<=e) || ((a+c)<=d && b<=e)){
      cout<<"YES"<<endl;
  }
  else 
    cout<<"NO"<<endl;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}

