/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: sumtrian
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
  int dp[n][n]={0};
  for(int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
      cin>>dp[i-1][j];
    }
  }

  for(int i= (n-1);i>=0;i--){
    for(int j=0;j<n-1;j++){
      dp[i-1][j] += max(dp[i][j], dp[i][j+1]);
    }
  }
  cout<<dp[0][0]<<endl;
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

