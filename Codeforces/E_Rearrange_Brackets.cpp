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
    int k; cin >> k;
    string s; cin >> s;
    int n = sz(s);

    stack<int> stk;
    int cur = 0, ans = 0;
    multiset<int> st;
    
    for(int i = n-1; i >= 0; i--){
        if(s[i] == ')')stk.push({++cur});
        else{
            ans += (cur-stk.top());
            st.insert(cur-stk.top());
            stk.pop();
        }
    }

    while(k-- && sz(st)){
        ans -= *st.rbegin();
        st.erase(--st.end());
    }

    cout << ans << endl;
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

