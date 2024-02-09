/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: C
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int mx,my,mp, drx, dry, drp, dlx,dly,dlp;
  cin >> mx >> my >> mp >> drx >> dry >> drp >> dlx >> dly >> dlp;

  double cal1 = sqrt(pow(drx-mx,2)+pow(dry-my,2));
  double cal2 = sqrt(pow(dlx-mx,2)+pow(dly-my,2));
  if(mp >= cal1){
    if(31 < drp && drp < 39){
      cout <<"si"<<endl; 
      return;
    }
  }
  else if(mp >= cal2){
    if(31 < dlp && dlp < 39){
      cout <<"si"<<endl;
      return;
    }
  }
  cout<<"no"<<endl;

}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  solve();
  return 0;
}

