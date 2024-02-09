/*
 * @Autor: Darwin Neira Carrasco
 * @Email: dneirac@unsa.edu.pe
 * @File: AandBandCompilationErros
 * @Descripcion:
 */

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int n; cin>>n;
  map<ll, int> m1, m2, m3;

  for(int i=0; i<n; i++){
    ll num; cin>>num;
    m1[num]++;
  }

  //segunda
  ll f=-1;
  for(int i=0; i<n-1; i++){
    ll num; cin>>num;
    m2[num]++;
  }
  for(auto x:m1){
    if(m2[x.first]!=x.second){
      f=x.first;
      break;
    }
  }
  cout<<f<<endl;

  //tercera
  ll s=-1;
  for(int i=0; i<n-2; i++){
    ll num; cin>>num;
    m3[num]++;
  }

  for(auto x:m2){
    if(m3[x.first]!=x.second){
      s=x.first;
      break;
    }
  }
  cout<<s<<endl;

}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  solve();
  return 0;
}

