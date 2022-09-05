/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: breakstick
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
  if(n%2==0)
    cout<<"YES"<<endl;
  else{
    if(x%2==0)
      cout<<"NO"<<endl;
    else  cout<<"YES"<<endl;
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

