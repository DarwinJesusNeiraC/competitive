/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: cook98
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

void solve(){
 int n,a=0,k;
 cin>>a;
 cin>>n;
 int arr[a]={0};
 for(int i=0;i<a;i++){
   cin>>k;
   if(n-k>=0){
     arr[i]++;
     n-=k;
   }
 }
 for(int i=0;i<a;i++) cout<<arr[i];
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

