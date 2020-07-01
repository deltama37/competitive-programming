#include <bits/stdc++.h>

using namespace std;

void solve(int, int[], int);

bool dfs(int, int, int, int[], int);

int main() {
    int n;
    cin >> n;
    int a[20] = {0};
    for (int i = 0; i < n; i++)cin >> a[i];
    int k;
    cin >> k;
    solve(n, a, k);
    return 0;
}

void solve(int n, int a[], int k) {
    if (dfs(0, 0, n, a, k)) printf("Yes\n");
    else printf("No\n");
}

bool dfs(int i, int sum, int n, int a[], int k) {
    if (i == n) return sum == k;
    if (dfs(i + 1, sum, n, a, k)) return true;
    if (dfs(i + 1, sum + a[i], n, a, k)) return true;
    return false;
}