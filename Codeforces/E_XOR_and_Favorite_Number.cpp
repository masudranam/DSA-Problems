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
const int N = 2e6 + 10;

int cnt[N],a[N],ans[N],cur,ps[N];
int k;
 int bs = 500;

struct Q{
    int l, r, id;
};

bool cmp(Q a, Q b){
    if(a.l/bs != b.l/bs)return a.l/bs <  b.l/bs;
    return a.r/bs > b.r/bs;
}

void add(int x){
    cur += cnt[ps[x]^k];
    cnt[ps[x]]++;
}

void rmv(int x){
    cnt[ps[x]]--;
    cur -= cnt[ps[x]^k];
  
}


void solve(){
 
 int n, q;

 cin >> n >> q >> k;
 bs = sqrt(n);

 for(int i = 0; i < n; i++){
    int x; cin >> x;
    ps[i+1] = ps[i]^x;
 }
 Q qr[q+5];
 for(int i = 0; i< q; i++){
    cin >> qr[i].l >> qr[i].r;
    qr[i].id = i;
 }

 sort(qr,qr+q,cmp);

   cnt[0] = 1;
    int l = 0, r = 0;

  for(int i = 0;i < q; i++){
    int l1 = qr[i].l-1, r1 = qr[i].r;
    while(l < l1)rmv(l++);
    while(l > l1)add(--l);
    while(r < r1)add(++r);
    while(r > r1)rmv(r--);
    ans[qr[i].id] = cur;
  }

  for(int i = 0; i < q; i++){
    cout << ans[i] << endl;
  }

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

