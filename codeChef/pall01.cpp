/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: pall01
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

void solve(){
  string n;cin>>n;
  string rn (n.rbegin(), n.rend());
  if(n==rn) cout<<"wins"<<endl;
  else cout<<"loses"<<endl;
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

