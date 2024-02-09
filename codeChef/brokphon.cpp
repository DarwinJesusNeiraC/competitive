/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: brokphon
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
  int arr[n]={0};
  int arb[n]={0};
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int count=0;
  for(int i=0;i<n-1;i++){
    if(arr[i]!=arr[i+1]){
      arb[i]=1;
      arb[i+1]=1;
    }
  }

  for(int i=0;i<n;i++)
    count+=arb[i];
  cout<<count<<endl;

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

