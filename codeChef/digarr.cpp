/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: digarr
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

void solve(){
  int d;cin>>d;
  string s = "";
  cin>>s;
  for(int i=0;i<d;i++){
    if(s[i]=='0' || s[i]=='5'){
      cout<<"Yes"<<endl;
      return;
    }
  }
  cout<<"No"<<endl;
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

