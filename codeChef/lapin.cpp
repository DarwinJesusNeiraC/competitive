/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: lapin
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

void solve(){
  string s;cin>>s;
  int len = s.length()/2;
  int arl[26] = {0};
  int arr[26] = {0};
  if(s.length()%2!=0)
    len +=1;
  for(int i=0;i<s.length()/2;i++){
    arl[s[i]-'a']++;
  }
  for(int i=len;i<s.length();i++){
    arr[s[i]-'a']++;
  }

  for(int i=0;i<26;i++){
    if(arr[i]==arl[i])
      continue;
    else{
      cout<<"NO"<<endl;
      return;
    }
  }
  cout<<"YES"<<endl;


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

