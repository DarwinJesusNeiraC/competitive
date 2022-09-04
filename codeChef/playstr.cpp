/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: playstr
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

void solve(){
  int n;cin>>n;
  int ars[2] = {0};
  int arr[2] = {0};
  string s,r;cin>>s>>r;
  for(int i=0;i<n;i++){
    if(s[i] =='1') ars[1]++;
    else ars[0]++;
  }
  for(int i=0;i<n;i++){
    if(r[i] =='1') arr[1]++;
    else arr[0]++;
  }
  if(ars[0]==arr[0] && ars[1]==arr[1]) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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

