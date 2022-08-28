/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: missp
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t,n,type;
  cin>>t;
  while(t--){
    int arr[100000+1] = {0};
    cin>>n;
    while(n--){
      cin>>type;
      arr[type]++;
    }
    for(int i=0;i<=100000;i++){
      if(arr[i]%2){
        cout<<i<<endl;
        break; 
      }
    }
  }
  return 0;
}

