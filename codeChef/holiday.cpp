/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: holiday
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

bool decre(int a, int b){
  return a > b;
}

void solve(){
  int n,w;cin>>n>>w;
  vector<int> arr(n);
  for(int i=0;i<n;i++)
    cin>>arr[i];

  sort(arr.begin(),arr.end(),decre);
  int ans=arr[0];
  for(int i=1;i<n;i++){
    if(ans>=w){
      cout<<n-i<<endl;
      return;
    }
    ans+=arr[i];
  }
  cout<<0<<endl;


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

