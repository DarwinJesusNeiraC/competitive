/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: party
* @Descripcion:
*/

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define INF 2e9

void solve(){
  int ans=0,n,c=0;
    cin>>n;
    int a[n+9];
    for(int i =1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        c=0;
        int x=a[i];
        while(x != -1)
        {
            x=a[x];
            c++;
        }
        ans=max(ans, c);
    }
    cout<<ans+1<<endl;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  solve();
  return 0;
}

