/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: johny
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

void solve(){
  int n;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int k;cin>>k;

  int prev = arr[k-1];
  sort(arr,arr+n);
  for(int i=0;i<n;i++){
    if(prev==arr[i]){
      cout<<i+1<<endl;
      return;
    }
  }

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

