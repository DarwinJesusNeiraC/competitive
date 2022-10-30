/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: newpiece
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int a,b,p,q;cin>>a>>b>>p>>q;
  if(a==p && b==q){
    cout<<0<<endl;
    return;
  }
  if(((a+b)%2==0 && (p+q)%2!=0) || ((a+b)%2!=0 && (p+q)%2==0)){
    cout<<1<<endl;
    return;
  }

  if(((a+b)%2==0 && (p+q)%2==0) || ((a+b)%2!=0 && (p+q)%2!=0)){
    cout<<2<<endl;
    return;
  }

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

