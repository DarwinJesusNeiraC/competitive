/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: oodpairs
* @Descripcion:
*/

#include<iostream>

using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    long int n;
    cin>>n;
    long int ans = 2*(n/2)*(n/2 +  n%2);
    cout<<ans<<endl;
  }
  return 0;
}

