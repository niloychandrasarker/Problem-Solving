#include <iostream>
#include <string>

using namespace std;

int min_operations_to_make_non_decreasing(string s) {
    int ones = 0;
    
    // Count the number of ones
    for (char c : s) {
        if (c == '1') {
            ones++;
        }
    }
    
    // If the string starts with 0, return max(ones - 1, 0)
    // Otherwise, return the number of ones
    if (s[0] == '0') {
        return max(ones - 1, 0);
    } else {
        return ones;
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int min_operations = min_operations_to_make_non_decreasing(s);
        cout << min_operations << endl;
    }
    
    return 0;
}
