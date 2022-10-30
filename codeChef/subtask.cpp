/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: subtask
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int n,m,k;cin>>n>>m>>k;
  int ans=0, point=0;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    if(x==1)
      ans++;
    if(i == m-1){
      if(ans!=m){
        point=0;
      }
      else{
        point=k;
      }
    }
    if(ans == n)
      point=100;
  }
  cout<<point<<endl;
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

