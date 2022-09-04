/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: cfrtest
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t,n,d,count=0;
  cin>>t;
  while(t--){
    int arr[100] ={0};
    cin>>n;
    while(n--){
      cin>>d;
      arr[d-1]++;
    }
    for(int i=0;i<100;i++){
      if(arr[i]>=1)
        count++;
    }
    cout<<count<<endl;
    count=0;
  }
  return 0;
}

