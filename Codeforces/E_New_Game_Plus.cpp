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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(all(a));
    reverse(all(a));

    priority_queue<int> pq;
    for(int i = 0; i < k+1; i++){
        pq.push(0);
    }

    int ans = 0;

    for(int i = 0; i < n; i++){
        int cur = pq.top();
        pq.pop();
        ans += cur;
       
        pq.push(cur+a[i]);
    }

    cout<<ans<<endl;
}

signed main() {
   ios_base::sync_with_stdio (0);
   cin.tie (0);

   int t = 1;   //cin >> t;
   for (int tc = 1; tc <= t; tc++) {
      //cout<<"Case "<<tc<<": ";
      solve();
   }
   return 0;
}

