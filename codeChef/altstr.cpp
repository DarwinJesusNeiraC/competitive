/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: altstr
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
  int arr[2]={0};
  string s;cin>>s;

  for(int i=0;i<n;i++)
    arr[s[i]-'0']++;

  if(arr[0]==arr[1])
    cout<<arr[0]+arr[1]<<endl;
  else cout<<(min(arr[0],arr[1])*2)+1<<endl;

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

