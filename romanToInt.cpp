/*
* @Autor: Darwin Jesus Neira Carrasco
* @Email:
* @Descripcion:
*/

#include<iostream>
#include<string>

using namespace std;


int values(char c){
  switch(c){
    case 'I':
      return 1;
    break;
    case 'V':
      return 5;
    break;
    case 'X':
      return 10;
    break;
    case 'L':
      return 50;
    break;
    case 'C':
      return 100;
    break;
    case 'D':
      return 500;
    break;
    case 'M':
      return 1000;
    break;
    default:
      return -1;
    break;
  }
}
int romanToInt(string s){
  int result = 0;
  for(int i = 0; i < s.length(); i++){
    int c1 = values(s[i]); // rescatamos el valor de primer caracter
    cout << "valor de c1 " << c1 <<endl; 
    if(i + 1 < s.length()){
      int c2 = values(s[i + 1]); // rescatamos el valor del segundo caracter
      cout << "valor de c2 " << c2 <<endl; 
      if(c1 >= c2){
        result += c1;
      }
      else{
        result = result + c2 - c1;
        i++;
      }
    }
    else{
      result += c1;
    }


  }

  return result;
}

int main(){
  //string s("III");
  string s("LVIII");
  //string s("IX");
  //string s("MCMXCIV");
  cout << s <<endl;
  cout << romanToInt(s) <<endl;
  return 0;
}

