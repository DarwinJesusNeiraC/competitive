/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: watscore
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  // k = max();
  int t,n,p,s,sum=0;
  cin>>t;
  while(t--){
    int arr[11] = {0};
    cin>>n;
    while(n--){
      cin>>p>>s;
        arr[p-1]=max(arr[p-1],s);;
    }
    for(int i=0;i<8;i++){
      sum+=arr[i];
    }
    cout<<sum<<endl;
    sum=0;
  }

  return 0;
}

