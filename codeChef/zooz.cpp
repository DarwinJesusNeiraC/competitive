/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: zooz
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int n;cin>>n;
  string s;
    if(n%2==0) {
      s+="1";
      for(int i=1;i<n-1;i++){
        s+="0";
      }
      s+="1";
    }
    else{
      for(int i=0;i<n;i++){
        if(i==(n/2))
          s+="1";
        else  
          s+="0";
      }
    }

    cout<<s<<endl;
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

