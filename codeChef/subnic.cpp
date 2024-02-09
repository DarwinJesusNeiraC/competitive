/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: subnic
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

  vector<ll> arr(n);
  vector<ll> dp(n+1,1);
  for(int i=0;i<n;i++)
    cin>>arr[i];

  unsigned ll int ans=0;
  unsigned ll int subArr=0;
  for(int i=1;i<n+1;i++){
    dp[i] = arr[i-1]<=arr[i]?dp[i-1]+1:1;
    ans+=dp[i];
  }
  cout<<ans<<endl;

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

