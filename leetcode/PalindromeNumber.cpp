/*
* @Autor: Darwin Jesus Neira Carrasco
* @Email:
* @Descripcion:
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool isPalindrome(int x){
  string cy (to_string(x));
  string cy_reverse(cy);
  reverse(cy_reverse.begin(), cy_reverse.end());
  return cy == cy_reverse;
}

int main(){
  cout << isPalindrome(121) <<endl;
  cout << isPalindrome(-121) <<endl;
  return 0;
}

