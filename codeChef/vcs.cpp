/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: vcs
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int n,m,k;cin>>n>>m>>k;
  int arr[n]= {0};
  for(int i=0;i<m;i++){
    int x;cin>>x;
    arr[x-1]++;
  }

  for(int i=0;i<k;i++){
    int x;cin>>x;
    arr[x-1]++;
  }

  int ti=0,utui=0;

  for(int i=0;i<n;i++){
    if(arr[i]==2)
      ti++;
    else if(arr[i]==0)
      utui++;
  }
  cout<<ti<<" "<<utui<<endl;
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

