#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> x(n), y(n);

    // Input নিচ্ছি x এবং y একসাথে
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int max_y_for_2 = 0; // x = 2 এর জন্য সবচেয়ে বড় y রাখবো
    int sum_y_for_1 = 0; // x = 1 এর জন্য y গুলা যোগ করবো

    // Loop দিয়ে check করবো
    for (int i = 0; i < n; i++) {
        if (x[i] == 2) {
            max_y_for_2 = max(max_y_for_2, y[i]);
        }
        if (x[i] == 1) {
            sum_y_for_1 += y[i];
        }
    }

    // ফলাফল হিসেব করি
    int cnt = 0;
    cnt += max_y_for_2; // x = 2 এর জন্য ১ বার
    cnt += sum_y_for_1; // x = 1 এর জন্য যোগফল

    cout << cnt << endl;
}

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
