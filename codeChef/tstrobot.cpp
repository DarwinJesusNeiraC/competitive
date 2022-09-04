/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: tstrobot
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

void solve(){

  int n,x;
  cin>>n>>x;
  int cl=x,cr=x;
  string s;cin>>s;
  for(int i=0;i<n;i++){
    if(s[i]=='L') x--;
    else x++;
    cl=min(cl,x);
    cr=max(cr,x);
  }
  cout<<1+cr-cl<<endl;
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

