/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: bscost
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int n,x,y,tax;cin>>n>>x>>y;
  string s;cin>>s;
  tax = min(x,y);
  bool unique = true;
  for(int i=0;i<n-1;i++)
    if(s[i] != s[i+1]){
      unique=false;
      break;
    }

  if(unique)
    cout<<0<<endl;
  else  cout<<tax<<endl;

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

