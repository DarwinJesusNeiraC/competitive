/*
* @Autor: Darwin Jesus Neira Carrasco
* @Email:
* @Descripcion:
*/

#include<iostream>
#include <string>
using namespace std;
#define ll long long

int main(){
  string s;
  int n = 1,ans = 1;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(i+1 < s.size()){
      if(s[i] == s[i+1]){
        n++;
        ans = max(ans, n);
      }
      else{
        n = 1;
      }
    }
  }
  cout << ans;

  return 0;
}

