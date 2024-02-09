/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: altaray
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
  vector<ll> dp(n,1);
  vector<ll> arr(n,0);

  for(int i=0;i<n;i++)
    cin>>arr[i];

  // n = 4
  // 1 -5 1 -5
  // 0  1 2  3
  // 1  1 2  1
  for(int i=n-1;i>0;i--){
    if(arr[i] * arr[i-1] < 0){
      dp[i-1]+=dp[i];
    }
  }

  for(int i=0;i<n;i++){
    cout<<dp[i]<<" ";
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

