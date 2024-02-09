/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: E
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  ll n;cin>>n;
  vector<pair<ll,ll>> points;
  points.push_back(make_pair(0,0));
  for(int i=0;i<n;i++){
    ll diane;cin>>diane;
    ll point;cin>>point;
    points.push_back(make_pair(diane,point));
  }
   
  sort(points.begin(),points.end());

  ll m;cin>>m;
  ll sum = 0;
  for(int i=0;i<m;i++){
    ll x;cin>>x;
    ll y;cin>>y;
    x = abs(x);
    y = abs(y);
    for(int j = 0;j<points.size()-1;j++){
      if (points[j].first < x && y < points[j+1].first){
        sum+=points[j+1].second;
        cout<<sum<<endl;
        cout<<"s "<<points[i+1].second<<endl;
        cout<<"f "<<points[i+1].first<<endl;
      }
    }
  }
  cout<<sum<<endl;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  solve();

  return 0;
}

