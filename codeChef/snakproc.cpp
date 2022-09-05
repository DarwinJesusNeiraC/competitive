/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: snakproc
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int l,ans=0;cin>>l;
  string s;cin>>s;

  for(int i=0;i<l;i++){
    if(s[i]=='H')
      ans++;

    if(s[i]=='T')
      ans--;

    if(ans<0 || ans>=2){
      cout<<"Invalid"<<endl;
      return;
    }
  }
  if(ans>0){
    cout<<"Invalid"<<endl;
  }
  else cout<<"Valid"<<endl;
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

