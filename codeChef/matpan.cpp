/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: matpan
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

void solve(){
  int price[26] = {0};
  int alpha[26] = {0};
  int ans=0;
  for(int i=0;i<26;i++)
    cin>>price[i];
  string s;cin>>s;
  for(int i=0;i<s.length();i++){
    alpha[s[i]-'a']++;
  }

  for(int i=0;i<26;i++){
    if(alpha[i]==0) ans+=price[i];
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

