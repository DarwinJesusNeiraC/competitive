/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: cook81
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t,a,b,ca=1,cb=2, auxA=1, auxB=2;;
  cin>>t;
  while(t--){
    cin>>a>>b;
    while(true){
      if(a-auxA>=0){
        ca+=2;
        auxA+=ca;
      }
      else{
        cout<<"Bob"<<endl;
        break;
      } 
      if(b-auxB>=0){
        cb+=2; 
        auxB+=cb;
      }
      else{
        cout<<"Limak"<<endl;
        break;
      }
    }
    ca=auxA=1;
    cb=auxB=2;
  }
  return 0;
}

