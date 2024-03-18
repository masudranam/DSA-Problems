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
    string t = "vika";
    int cur = 0;
    vector<string> s(n);
    for(int i = 0; i < n;i ++)cin >> s[i];
    for(int i = 0; i < m; i++){
        for(int j = 0;j < n; j++){
            if(s[j][i] == t[cur]){
                cur++;break;
            }
        }
        if(cur == 4){
            cout<<"YES\n";return;
        }
    }
    if(cur < 4)cout<<"NO\n";
    else cout<<"YES\n";

}

signed main() {
   ios_base::sync_with_stdio (0);
   cin.tie (0);

   int t = 1;   cin >> t;
   for (int tc = 1; tc <= t; tc++) {
      solve();
   }
   return 0;
}

