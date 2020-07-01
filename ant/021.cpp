#include <bits/stdc++.h>

using namespace std;

void solve(int, int []);

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    solve(n, a);
    return 0;
}

void solve(int n, int a[]) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int len = a[i] + a[k] + a[j];
                int ma = max(a[i], max(a[j], a[k]));
                int rest = len - ma;
                if (ma < rest) {
                    ans = max(ans, len);
                }
            }
        }
    }
    printf("%d\n", ans);
}