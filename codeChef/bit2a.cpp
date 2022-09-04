/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: bit2a
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
  vector<int> arr(n);
  for(int i=0;i<n;i++)
    cin>>arr[i];

  for(int i=0;i<n;i++){
    int count=0;
    for(int j=i+1;j<n;j++){
      if(arr[i]!=arr[j])
        count++;
    }
    cout<<count<<" ";
    count=0;
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

