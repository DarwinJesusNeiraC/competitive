/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: vaccine2
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int n,d;cin>>n>>d;
  int arr[n]={0};
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  if(n%d==0)
    cout<<n/d<<endl;
  else
    cout<<(n+1)/d<<endl;
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

