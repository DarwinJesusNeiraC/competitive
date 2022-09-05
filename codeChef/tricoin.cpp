/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: tricoin
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  ll n; cin>>n;
  ll i=1, d=n, middle=(i+d)/2;

  while(i+1<d){
    middle=(i+d)/2;
    ll ans=(middle)*(middle+1)/2;
    if(ans>=n){
      d=middle;
    }else{
      i=middle;
    }
    if(ans==n){
      cout<<middle<<endl;
      return;
    }
  }
  cout<<i<<endl;
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

