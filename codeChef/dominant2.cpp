/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: dominant2
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

void solve(){
  int n;cin>>n;
  int arr[1000] = {0};
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    arr[a-1]++;
  }
  int ans = 0;
  for(int i=0;i<1000;i++){
    ans= max(arr[i], ans);
  }
  int count=0;
  for(int i=0;i<1000;i++){
    if(ans == arr[i]){
      count++;
    }
    if(count>1){
      cout<<"NO"<<endl;
      return;
    }
  }
  cout<<"YES"<<endl;

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

