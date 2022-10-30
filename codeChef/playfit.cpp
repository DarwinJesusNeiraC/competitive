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
  int n;cin>>n;
  int dp[n]={0};
  for(int i=0;i<n;i++)
    cin>>dp[n];

  cout<<"DP: "<<endl;
  for(int i=0;i<n;i++)
    cout<<dp[i]<<" ";
  cout<<endl;

  int dp2[n]={0};
  int minN = 0;
  for(int i=1;i<n;i++){
    minN=min(minN, dp[i]);
    dp2[i]=minN;
  }
  cout<<"DP2: "<<endl;
  for(int i=0;i<n;i++)
    cout<<dp2[i]<<" ";
  cout<<endl;

  int maxN = dp2[0];
  for(int i=0;i<n;i++){
    maxN = max(maxN,dp[i]-dp2[i]);
  }
  if(maxN==0)
    cout<<"UNFIT"<<endl;
  else
    cout<<maxN<<endl;
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

