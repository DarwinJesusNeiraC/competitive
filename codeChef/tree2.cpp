/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: tree2
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

void solve(){
  int n; cin>>n;
  unordered_set<int> s;

  for(int i=0;i<n;i++){
    int data; cin>>data;
    if(data>0)
      s.insert(data);
  }
  cout<<s.size()<<endl;

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

