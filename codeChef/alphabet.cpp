/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: alphabet
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(int alpha[]){
  string w;cin>>w;
  int ans=0;
  for(int i=0;i<w.length();i++)
    if(alpha[w[i]-'a']!=0){
      ans++;
    }

  if(ans==w.length())
    cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  string s;cin>>s;
  int alpha[26]={0};
  for(int i=0;i<s.length();i++)
    alpha[s[i]-'a']++;
  int t;
  cin>>t;
  while(t--){
    solve(alpha);
  }
  return 0;
}

