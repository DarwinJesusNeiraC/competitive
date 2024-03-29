/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: playfit
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int n; cin>>n;
  int dp[n];

  for(int i=0;i<n;i++)
    cin>>dp[i];

  int res=dp[0];
  int ans=0;
  for(int i=1;i<n;i++)
    res=min(res, dp[i]),ans=(dp[i]>res)?max(dp[i]-res, ans):ans;

  if(ans) cout<<ans<<endl;
  else cout<<"UNFIT"<<endl;
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

