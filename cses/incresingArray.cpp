/*
* @Autor: Darwin Jesus Neira Carrasco
* @Email:
* @Descripcion:
*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
  int n;
  vector<ll> nums;
  cin >> n;
  int mx = 0;
  ll steps = 0;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    mx = max(mx, x);
    steps += mx-x;

  }

  cout << steps <<endl;
  return 0;
}

