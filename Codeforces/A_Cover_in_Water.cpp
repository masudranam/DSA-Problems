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
    int n; cin >> n;
    string s; cin >> s;

    int tot = count(all(s),'.');
    int mx = 0,cur = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '.')cur++;
        else{
            mx = max(mx,cur);
            cur = 0;
        }
    }
    mx = max(cur,mx);

    int ans = tot;
    if(mx > 2)ans = min(ans,2ll);
    cout<<ans<<endl;
}

signed main() {
   ios_base::sync_with_stdio (0);
   cin.tie (0);

   int t = 1;   cin >> t;
   for (int tc = 1; tc <= t; tc++) {
      //cout<<"Case "<<tc<<": ";
      solve();
   }
   return 0;
}

