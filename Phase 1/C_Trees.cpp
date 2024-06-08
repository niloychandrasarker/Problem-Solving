#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> count(100005, 0); // Initialize count array

    // Count the occurrences of each tree height
    for (int i = 0; i < n; ++i) {
        int height;
        cin >> height;
        count[height]++;
    }

    int min_changes = n;
    for (int i = 1; i <= 100000; ++i) {
        int changes = 0;
        for (int j = 1; j <= 100000; ++j) {
            if (j == i) {
                changes += count[j] % 2; // Add the odd occurrences of the current height
            } else {
                changes += count[j] * abs(i - j); // Add the total number of changes required for other heights
            }
        }
        min_changes = min(min_changes, changes);
    }

    // Output the minimum count of changes required
    cout << min_changes << endl;

    return 0;
}
