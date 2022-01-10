/*
* @Autor: Darwin Jesus Neira Carrasco
* @Email:
* @Descripcion:
*/

#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
  string str = "";
  string s = strs[0];
  if(strs.size() == 0){
    return "";
  }
  else if(strs.size() == 1){
    return strs[0];
  }
  else{
    string new_s;
    for(int i = 1; i < strs.size(); i++){
      string temp = strs[i];
      for(int j = 0; j < temp.size(); j++){
        if(s[j] == temp[j]){
          new_s+=s[j];
        }
        else{
          break;
        }
      }
      s = new_s;
      new_s.clear();
    }
  }
  str = s;
  return str;
}

int main(){
  vector<string> strs= {"flower", "flow", "flight"};
  //vector<string> strs= {"dog", "racecar", "car"};
  //vector<string> strs= {"a"};
  //vector<string> strs= {""};
  //vector<string> strs= {"",""};
  cout << strs.size() <<endl;
  string s (longestCommonPrefix(strs));
  cout << s <<endl;
  return 0;
}

