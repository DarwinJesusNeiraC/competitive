/*
 * @Autor: Darwin Neira Carrasco
 * @Email: dneirac@unsa.edu.pe
 * @File: doubleString
 * @Descripcion:
 */

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  map<string,bool> m;
  int n; cin>>n;
  vector<string> v(n);

  for(int i=0; i<n; i++){
    string str; cin>>str;
    v[i]=str;
    m[str]=true;
  }

  for(string str:v){
    int n=str.length();
    bool ans=0;
    if(n>1){
      int mid=1;
      while(mid<n){
        string str1, str2;
        str1=str.substr(0, mid);
        str2=str.substr(mid, n-mid);
        mid++;

        if(m.find(str1)!=m.end()&&m.find(str2)!=m.end())
          ans=1;
      }
    }
    cout<<ans;
  }
  cout<<endl;
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

