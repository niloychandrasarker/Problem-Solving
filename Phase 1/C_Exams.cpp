#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    pair<int, int> exams[n];
    for (int i = 0; i < n; ++i) {
        cin >> exams[i].first >> exams[i].second;
    }

    sort(exams, exams + n);

    int best = -1;
    for(int i = 0; i < n; i++) {
        if (best <= exams[i].second) {
            best = exams[i].second;
        } else {
            best = exams[i].first;
        }
    }

    cout << best << endl;

    return 0;
}
