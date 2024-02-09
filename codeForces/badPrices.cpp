/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: badPrices
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
  int arr [n]={0};
  int arr2 [n]={0};
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
    arr2[i]=arr[i];
  int count = 0;
  for(int i=n-2;i>-1;i--){
    arr[i]=min(arr[i],arr[i+1]);
    if(arr[i]!=arr2[i])
      count++;
  }
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

