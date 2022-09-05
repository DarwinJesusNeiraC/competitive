/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: slowsoln
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int t,n,sum;cin>>t>>n>>sum;
  ll ans=0;
  if(t<=sum/n)
    ans=t*n*n;
  else
    ans=(sum/n)*n*n+(sum%n)*(sum%n);

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

