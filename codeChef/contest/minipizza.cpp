/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: minipizza
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int n,x;cin>>n>>x;
  int i=1;
  while((i*4)<(n*x)){
    i++;
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

