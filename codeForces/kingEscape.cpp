/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: kingEscape
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
  int a1,a2;cin>>a1>>a2;
  int b1,b2;cin>>b1>>b2;
  int c1,c2;cin>>c1>>c2;

  int q1 = (b2>a2 && b1 > a1  && c2 > a2 && c1 > a1);
  int q2 = (b2>a2 && b1 < a1  && c2 > a2 && c1 < a1);
  int q3 = (b2<a2 && b1 < a1  && c2 < a2 && c1 < a1);
  int q4 = (b1>a1 && b2 < a2  && c1 > a1 && c2 < a2);
  if(q1 || q2 || q3 || q4){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }

}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  solve();
  return 0;
}

