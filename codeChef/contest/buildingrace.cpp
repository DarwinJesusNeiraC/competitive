/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: buildingrace
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  ll a,b,x,y;cin>>a>>b>>x>>y;
  double n = a/x*0.1;
  double m = b/y*0.1;
  //cout<<n<<endl;
  //cout<<m<<endl;
  if(n == m){
    cout<<"Both"<<endl;
  }
  else if(n < m){
    cout<<"Chef"<<endl;
  }
  else if(n > m){
    cout<<"Chefina"<<endl;
  }
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

