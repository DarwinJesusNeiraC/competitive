/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: D
* @Descripcion:
*/

#include<bits/stdc++.h>
#include<map>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

bool comp(const pair<string,int>&a, const pair<string,int>&b){
  if(a.second == b.second){
    return a.first < b.first;
  }
  else{
    return a.second < b.second;
  }

}
void solve(){
  int par [18]= {0};
  for(int i=0;i<18;i++){
    cin>>par[i];
  }
  int n;cin>>n;

  vector<pair<string, int>> result;

  for(int i=0;i<n;i++){
    string name;cin>>name;
    int sum = 0;
    int puntaje[18]={0};
    for(int j=0;j<18;j++){
      int num;
      cin>>num;
      sum += num-par[j];
    }
    result.push_back(make_pair(name, sum));
  }

  sort(result.begin(),result.end(), &comp);
  for(int i = 0;i<result.size();i++){
    if(result[i].second==0){
      cout<<result[i].first<<" "<<"E"<<endl;
      continue;
    }
    else if(result[i].second > 0){
      cout<<result[i].first<<" +"<<result[i].second<<endl;
      continue;
    }
    cout<<result[i].first<<" "<<result[i].second<<endl;
  }

}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  solve();
  return 0;
}

