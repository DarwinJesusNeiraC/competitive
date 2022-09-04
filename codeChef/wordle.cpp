/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: wordle
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

void solve(){
  string s,t,ans = "";
  cin>>s>>t;
  for(int i=0;i<5;i++){
    if(s[i]!=t[i]) ans+="B";
    else ans +="G";
  }
  cout<<ans<<endl;
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

