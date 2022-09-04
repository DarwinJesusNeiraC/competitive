/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: ck87medi
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int n,k;cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];

  sort(arr,arr+n);
  cout<<arr[(n+k)/2]<<endl;

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

