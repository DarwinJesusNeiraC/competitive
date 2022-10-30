/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: luckstr
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int k;cin>>k;
  int n;cin>>n;
  string ars [k];
  while(k--){
    cin>>ars[k];
  }
  while(n--){
    string s;cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
      if(s.length() == 47){
        count=1;
        break;
      }
      for(int j=0;j<s.length()+1;j++){
        if(s.substr(i,s.length())==s){
          count=1;
          break;
        }
      }
    }

    if(count==1)
      cout<<"Good"<<endl;
    else 
      cout<<"Bad"<<endl;

  }
  return 0;
}

