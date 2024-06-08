#include <iostream>
#include <vector>

const int mod = 998244353;

struct Modint {
    int x;
    Modint() : x(0) {}
    Modint(int _x) : x(_x) {}
};

Modint operator+(Modint a, Modint b) { return Modint((a.x + b.x) % mod); }
Modint operator-(Modint a, Modint b) { return Modint((a.x - b.x + mod) % mod); }
Modint operator*(Modint a, Modint b) { return Modint(1LL * a.x * b.x % mod); }
Modint operator/(Modint a, Modint b);

Modint operator^(Modint a, int b) {
    Modint ans = 1;
    for (; b; b >>= 1, a *= a)
        if (b & 1) ans *= a;
    return ans;
}

Modint operator~(Modint a) {
    int b = mod - 2;
    Modint ans = 1;
    for (; b; b >>= 1, a *= a)
        if (b & 1) ans *= a;
    return ans;
}

Modint operator/(Modint a, Modint b) { return a * ~b; }

int lowbit(int x) { return x & -x; }

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int T;
    std::cin >> T;

    while (T--) {
        int n, k;
        std::cin >> n >> k;
        
        std::vector<Modint> a(n + 1), inv(n + 1);
        std::vector<int> b(n);

        inv[0] = inv[1] = 1;
        for (int i = 2; i <= n; ++i)
            inv[i] = Modint((mod - mod / i) * inv[mod % i].x);

        for (int i = 0; i < n; ++i)
            std::cin >> b[i];

        for (int i = 1; i <= n; ++i) {
            Modint mul = 1;
            for (int u = i + lowbit(i), d = 1; u <= n; u += lowbit(u), ++d) {
                mul = mul * Modint((d + k - 1) * inv[d].x);
                a[u] = (a[u] - mul * b[i - 1] + mod) % mod;
            }
        }

        for (int i = 1; i <= n; ++i)
            std::cout << a[i].x << " \n"[i == n];
    }

    return 0;
}
