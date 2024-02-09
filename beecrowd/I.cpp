/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: I
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  string s;cin>>s;
  int n;cin>>n;
  while(n--){
    string ps;cin>>ps;
    if(ps.length()!=s.length())
      continue;
    else{
     int isAdress = 1;
     for(int i=0;i<s.length()-1;i++){
       int sum1 = abs(s[i]-ps[i]);
       int sum2 = abs(s[i+1]-ps[i+1]);
       if(s[i] == 'z')
         sum1+=26;
       if(s[i+1])
         sum2+=26;
       if( sum1 != sum2){
         
         printf("caracter ps: %c, valor de i para ps: %d\n", ps[i] , i);
         printf("caracter s: %c, valor de i para s: %d\n", s[i] , i);
         printf("caracter ps+1 : %c, valor de i para ps: %d\n", ps[i+1] , i+1);
         printf("caracter s+1: %c, valor de i para s: %d\n", s[i+1] , i+1);
         
         isAdress=0;
         break;
       }
     }
     if(isAdress){
      printf("rpta");
       cout<<ps<<endl;
       break;
     }
     else{
       continue;
     }
    }
  }

}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  solve();
  return 0;
}

