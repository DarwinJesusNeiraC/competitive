/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: coins
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

unordered_map<ll,ll> dp;

ll ans(ll n){
  if(n<2)
    return n;
  if(dp[n])
    return dp[n];

  dp[n]=max(n,ans(n/2) + ans(n/3) + ans(n/4));
  return dp[n];
}

void solve(){
  ll n;
  while(cin>>n){
    ll answer = ans(n);
    cout<<answer<<endl;
  }
}


int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  solve();
  return 0;
}

