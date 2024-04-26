#include <iostream>
#include <vector>
using namespace std;

bool isCrossing(int x11, int x12, int x21, int x22)
{
    if (x11 < x21 && x12 >= x22)
        return 1;

    return 0;
}

void solution()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    long long cnt = 0;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (isCrossing(i, v[i], j, v[j]))
                cnt++;

    cout << cnt << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solution();
    }
}