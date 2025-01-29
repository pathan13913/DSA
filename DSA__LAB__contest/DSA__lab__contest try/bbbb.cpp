#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int n, q; 
        cin >> n >> q;

        vector<int> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i];
        }

     
        sort(points.begin(), points.end());

        cout << "Case " << t << ":\n";

        for (int i = 0; i < q; ++i) {
            int A, B;
            cin >> A >> B;

            auto left = lower_bound(points.begin(), points.end(), A);
            auto right = upper_bound(points.begin(), points.end(), B);

            cout << right - left << '\n';
        }
    }
}
