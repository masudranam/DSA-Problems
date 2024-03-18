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

const double eps = 1e-12;
const double PI = acos (-1.0);

   int sign (double x) {
      return (x > eps) - (x < -eps);
   }

struct Point {
   double x=0, y=0;
   void read() { cin >> x >> y; }

   Point operator + (const Point& b) const { return Point{x + b.x, y + b.y};}
   Point operator - (const Point& b) const { return Point{x - b.x, y - b.y};}
   Point operator / (const Point& b) const { return Point{x / b.x, y / b.y};}
   Point operator * (const Point& b) const { return Point{x * b.x, y * b.y};}

   void operator += (const Point& b) { x += b.x; y += b.y; }
   void operator -= (const Point& b) { x -= b.x; y -= b.y; }
   void operator *= (const Point& b) { x *= b.x; y *= b.y; }
   void operator /= (const Point& b) { x /= b.x; y /= b.y; }
   void operator += (const double k) { x += k; y += k; }
   void operator -= (const double k) { x -= k; y -= k; }
   void operator *= (const double k) { x *= k; y *= k; }
   void operator /= (const double k) { x /= k; y /= k; }

   bool operator == (Point a) const {return (sign (a.x - x) == 0 && sign (a.y - y) == 0);}
   bool operator  < (Point a) const {return sign(a.x-x)==0? y<a.y:x<a.x;}
   bool operator  > (Point a) const {return sign(a.x-x)==0? y>a.y:x>a.x;}
   bool operator != (Point a) const {return ! (*this == a);}
   double norm() {return sqrt (x * x + y * y);}
   double arg() {return atan2 (y, x);}

   inline double dot (Point a, Point b) {return a.x * b.x + a.y * b.y;}
   inline double dist (Point a, Point b) {sqrt (dot (a - b, a - b));}
   inline double cross (Point a, Point b) {return a.x * b.y - a.y * b.x;}
   inline double cross2 (Point a, Point b, Point c) {return cross (b - a, c - a);}
   inline int orientaion (Point a, Point b, Point c) {return sign (cross (b - a, c - a));}
   Point perp (Point a) {return Point{-a.y, a.x};}
   double deg_to_rad (double d) {return d * PI / 180.0;}
   double rad_to_deg (double r) {return r * 180.0 / PI;}
   double get_angle (Point a, Point b) {
      double costheta = dot (a, b) / a.norm() / b.norm();
      return acos (max ( (double) -1.0, min ( (double) 1.0, costheta)));
   }
};


void solve() {
 
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

