/// *** --- |||  harekrishna harekrishna krishna krishna hare hare harerama harerama rama rama hare hare  ||| --- *** ///
/*
||-------------------------------------------||
||            Niloy Chandra Sarker           ||
|| Dept. of Computer science and Engineering ||
||        niloysarker.cs@gmail.com           ||
||         nsarker12.niter.edu.bd            ||
||-------------------------------------------||
*/
#include<bits/stdc++.h>
using namespace std;

///************************************** M a r c o **************************************///
#define ull unsigned long long
#define ft float
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define left(node) (node*2)
#define right(node) (node*2+1)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define mx_int_prime 999999937
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"

#define gcd(a,b)           __gcd(a,b)
#define lcm(a, b)          ((a)*((b)/gcd(a,b)))
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define MAX3(a,b,c) max(a,max(b,c))
#define MIN3(a,b,c) min(a,min(b,c))
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

///************************************** C o n t a i n e r **************************************///

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int,int> pri;
typedef pair<double, double> prd;
typedef pair<ll, ll> prl;
typedef vector<pri> vpri;
typedef vector<prl> vprl;
typedef vector<prd> vprd;
typedef double db;

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

///************************************** ar/v input-ouput **************************************///

#define arinput(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define aroutput(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}
#define vinput(v,n) for(int i=0;i<n;i++){cin>>v[i];}
#define voutput(v,n) for(int i=0;i<n;i++){cout<<v[i]<<" ";}
 
 ///************************************** C o n s t **************************************///

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};
 
 ///************************************** D e b u g e r **************************************///

template < typename A, typename B >
ostream& operator << ( ostream& os, const pair< A, B > & p ) {
    return os << "(" << p.f << ", " << p.s << ")";
}

template < typename V >
ostream &operator << ( ostream & os, const vector< V > &v ) {
    os << "{";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename S >
ostream &operator << ( ostream & os, const set< S > &s ) {
    os << "[";
    for(auto it = s.begin(); it != s.end(); ++it) {
        if( it != s.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename M >
ostream &operator << ( ostream & os, const multiset< M > &ms ) {
    os << "[";
    for(auto it = ms.begin(); it != ms.end(); ++it) {
        if( it != ms.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename K, typename V >
ostream &operator << ( ostream & os, const map< K, V > &mp ) {
    os << "[";
    for(auto it = mp.begin(); it != mp.end(); ++it) {
        if( it != mp.begin() ) os << ", ";
        os << it -> f << " = " << it -> s ;
    }
    return os << "]";
}

#define debug(args...) do {cerr << #args << " : "; err(args); } while(0)

void err () {
    cerr << endl;
}

template <typename T>
void err( T a[], int n ) {
    for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename ... rest>
void err( T arg, const rest &... r) {
    cerr << arg << ' ';
    err(r...);
}

 ///************************************** C O D E **************************************///
 ///-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-///
 
int n;
int x[3], y[3];
int u, v;

pair<int, int> centralSquare() {
    int a = (x[0] == x[1]) ? x[0] : x[2];
    int b = (y[0] == y[1]) ? y[0] : y[2];
    return {a, b};
}

void execute(int test_number) {
    cin >> n;
    for (int i = 0; i < 3; i++) cin >> x[i] >> y[i];
    cin >> u >> v;

    int cx = centralSquare().first, cy = centralSquare().second;

    if ((cx == 1 || cx == n) && (cy == 1 || cy == n)) { 
        cout << ((u == cx || v == cy) ? "YES\n" : "NO\n");
    } else {
        if ((cx + cy) % 2 == (u + v) % 2) {
            cout << (cx % 2 == u % 2 ? "YES\n" : "NO\n"); 
        } else {
            cout << "YES\n"; 
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        execute(i);
    }
    return 0;
}
