#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m, s;
    cin >> n >> m >> s;
    
    int rows_mod = n % s;
    int cols_mod = m % s;
    
    int rows_groups = (n + s - 1) / s; // Equivalent to ceiling(n / s)
    int cols_groups = (m + s - 1) / s; // Equivalent to ceiling(m / s)
    
    int num_positions = rows_mod * cols_groups + cols_mod * rows_groups - rows_mod * cols_mod;
    
    if (rows_mod == 0) {
        num_positions = rows_groups * cols_groups;
    }
    
    cout << num_positions << endl;
    
    return 0;
}
