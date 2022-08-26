/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: testAVG
* @Descripcion:
*/

#include<iostream>

using namespace std;

int main(){
  int t,a,b,c;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>a>>b>>c;
    if(((a+b)/2>=35) && ((a+c)/2>=35) && ((c+b)/2>=35)) cout <<"Pass"<<endl;
    else cout<<"Fail"<<endl;
  }
  return 0;
}

