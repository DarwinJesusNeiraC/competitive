/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: ttenis
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int arr[2]={0};
  string s;cin>>s;
  for(int i=0;i<s.length();i++){
    arr[s[i]-'0']++;
  }

  if(arr[0] > arr[1])
      cout<<"LOSE"<<endl;
  else 
      cout<<"WIN"<<endl;
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

