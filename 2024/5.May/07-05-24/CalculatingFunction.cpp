#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;

  long long ans = 0;

  n%2 == 0 ? ans = (n/2) : ans =  (-n + (n/2));

  cout << ans << endl;

  return 0;
}
