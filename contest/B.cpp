/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: B
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int posx=0;
  int posy=0;
  int n;cin>>n;
  string s;cin>>s;
  for (int i=0;i<n;i++){
    if(s[i]=='U') posy++;
    else if(s[i]=='D') posy--;
    else if(s[i]=='R') posx++;
    else if(s[i]=='L') posx--;
    if(posx==1 && posy==1) {
      cout<<"YES"<<endl;return;
    }
  }
  cout<<"NO"<<endl;
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

