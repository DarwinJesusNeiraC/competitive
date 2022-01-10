/*
* @Autor: Darwin Jesus Neira Carrasco
* @Email:
* @Descripcion:
*/

#include<iostream>

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  cout << "en el metodo" <<endl;
  cout << nums.size() <<endl;
  vector <int> result;
  for(int i = 0; i < nums.size(); i++){
    for(int j = i+1; j < nums.size(); j++){
      cout << "antes del if"<<endl;
      cout << (i + j ) <<endl;
      if( (nums[i] + nums[j]) == target){
        cout << i <<endl;
        result.push_back(i);
        cout << j <<endl;
        result.push_back(j);
      }
    }
  }

  return result;
}

int main(){
  vector<int> nums = {2,7,11,15};
  int target = 9;
  cout << "antes de la llamda" <<endl;
  vector <int> retornado = twoSum(nums, target);
  for(int x : retornado){
    cout << x <<endl;
  }
  return 0;
}

