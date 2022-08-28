/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: ezspeak
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    //char s [n];
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n;i++){
      switch(s[i]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': count=0; break;
        default: count++; break;
      }
      if (count>=4) break;
    }
    if(count<4)  cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}

