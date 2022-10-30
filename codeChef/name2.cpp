/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: name2
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

bool get(string m, string w, int a , int b){
  for(int i=0, j=0;i<a&&j<b;i++,j++){
    if(m[i]!=w[j])
      j--;
    else
      if(j+1==b)
        return 1;
  }
  return 0;
}
void solve(){
  string m,w;cin>>m>>w;
  int a=m.length();
  int b=w.length();

  if(a<b) swap(m, w), swap(a,b);

  if(get(m,w,a,b)) cout<<"YES"<<endl;
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

