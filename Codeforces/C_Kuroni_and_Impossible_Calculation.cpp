#include<bits/stdc++.h>
using namespace std;

#define print(a) for(auto x:a)cout<<x<<' ';cout<<'\n';
#define debug(x) cout<<#x<<" "<<x<<endl
#define all(a) (a).begin(),(a).end()
#define sz(a) (int)(a.size())
#define int   long long int
#define endl '\n'
#define ar array
 
const int M = 1e9 + 7;
const int N = 2e5 + 10;


void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    map<int,int>mp;
    bool f = 0;
    for(int i = 0; i < n; i++){
      cin >> a[i];
      if(mp[a[i]])f = 1;
      mp[a[i]]++;
    }
    if(n > m || f){
      cout << 0 << endl;
      return;
    }

    int ans = 1;
    for(int i = 0;i < n; i++){
      for(int j = i+1; j < n; j++){
         ans = (ans*abs(a[i]-a[j]))%m;
      }
    }
    cout << ans << endl;
    
    

}

signed main() {
   ios_base::sync_with_stdio (0);
   cin.tie (0);

   int t = 1;   //cin >> t;
   for (int tc = 1; tc <= t; tc++) {
      solve();
   }
   return 0;
}

