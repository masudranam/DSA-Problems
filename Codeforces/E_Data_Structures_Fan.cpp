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

struct node{
int mn,s,mx,lz;
}st[1<<19];
int n,q;

struct ST{
void upd(int l1,int x,int i=1,int l2=0,int r2=n-1){
  if(l2==r2){
    st[i].mx=x;
    return;
  }

  int m2=(l2+r2)/2;
  if(l1<=m2)
    upd(l1,x,2*i,l2,m2);
  else upd(l1,x,2*i+1,m2+1,r2);

  st[i].mx=(st[2*i].mx^st[2*i+1].mx);
}

int qry(int l1,int r1,int i=1,int l2=0,int r2=n-1){
if(l2>=l1&&r2<=r1){
    return st[i].mx;
}

if(l2 > r1 || r2 < l1)return 0; //This line is crazy
    int m2=(l2+r2)/2;
return ((l1<=m2?qry(l1,r1,2*i,l2,m2):0)^(m2<r1?qry(l1,r1,2*i+1,m2+1,r2):0));
}

};


void solve(){
    cin >> n;
    ST st;
    vector<int> a(n);
    for(int i = 0;i < n; i++){
        int x; cin >> x;
        st.upd(i,x);
        a[i] = x;
    }
    string s; cin >> s;
    int o = 0, z = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '0')z ^= a[i];
        else o ^= a[i];
    }
    cin >> q;
    while(q--){
        int t; cin >> t;
        if(t == 1){
            int l, r; cin >> l >> r;
            l--,r--;
            int cur = st.qry(l,r);
            o^=cur, z^=cur;
        }else{
            int x;cin >> x;
            if(x)cout<<o<<' ';
            else cout<<z<<' ';
        }
    }
    cout<<endl;

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

