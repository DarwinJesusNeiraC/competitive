/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: compressvd
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

void solve(){
  int n;cin>>n;
  int s[n];
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  int ans=1;
  for(int i=1;i<n;i++){
    if(s[i]!=s[i-1]) ans++;
  }
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

