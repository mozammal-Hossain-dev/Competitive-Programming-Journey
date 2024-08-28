#include<bits/stdc++.h>
using namespace std;

void solution() {
    int g, l;
    cin >> g >> l;

    if (l % g == 0) {
        cout << g << " " << l << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        solution();
    }
}
