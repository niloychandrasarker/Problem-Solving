#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf endl
#define ll long long
#define pb push_back
#define _ << ' ' <<
 
#define INF (ll)1e18
#define mod 998244353
#define maxn 110
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    #if !ONLINE_JUDGE && !EVAL
        ifstream cin("input.txt");
        ofstream cout("output.txt");
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m; cin >> n>>m;
        ll sq = sqrt(n) + 2,sqm=sqrt(m)+2;
    
        vector bad(sq + 1, vector<bool>(sqm+1, 0));
        for (ll i = 2; i <= min(sq,sqm); i++) {
            for (ll a = i; a <= sq; a += i) {
                for (ll b = i; b <= sqm; b += i) {
                    bad[a][b] = true;
                }
            }
        }
    
        ll ans = 0;
        for (ll a = 1; a * a <= n; a++) {
            for (ll b = 1; b * b <= m; b++) {
                if (bad[a][b]) continue;
                ans += min(n/(a+b)/a,m/(a+b)/b);
            }
        }
        cout << ans << nl;
    }
 
    return 0;
}