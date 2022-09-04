/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: proc18a
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t,k,n,a,max=0;
  cin>>t;
  while(t--){
    int arr[100] = {0};
    cin>>n>>k;

    for(int i=0;i<n;i++){
      cin>>a;
      arr[i]=a;
    }

    for(int i=0;(i+(k-1))<n;i++){
      int sum=0;
      int y=0;
      for(int j=i;y<k;j++){
        sum+=arr[j];
        y++;
      }
      if(max < sum) max = sum;
    }
    cout<<max<<endl;
  }
  return 0;
}

