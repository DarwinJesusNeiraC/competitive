/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: A
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
  vector<string> arr (n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  cout<<arr[k-1]<<endl;
  

}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
  return 0;
}

