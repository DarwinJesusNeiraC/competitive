/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: nonadjflip
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int n;cin>>n;
  string s;cin>>s;
  s+='0';
  int ans=0;
  for(int i=0;i<n;i++){
    if(s[i]=='1' && s[i+1]=='0'){
      ans=1;
    }
    if(s[i]=='1' && s[i+1]=='1'){
      ans=2;
      break;
    }
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

