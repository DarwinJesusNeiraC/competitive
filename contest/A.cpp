/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: A
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  string s = "codeforces";
  int n;cin>>n;
  for(int i=0;i<n;i++){
    char c;cin>>c;
    if(s.find(c) != s.npos) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }

}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  solve();
  return 0;
}

