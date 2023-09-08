#include <bits/stdc++.h>
using namespace std;
bool prime[1'000'000 + 1];
void sieve_of_eratosthenes() {
  memset(prime, true, sizeof(prime));
  prime[1] = false;
  for (int p = 2; p * p <= 1'000'000; p++) {
    if (prime[p] == true) {
      for (int i = p * p; i <= 1'000'000; i += p) prime[i] = false;
    }
  }
}
int main() {
  int t;
  cin >> t;
  sieve_of_eratosthenes();
  while (t--) {
    int n;
    cin >> n;
    vector<int> v;
    while (n--) {
      int temp;
      cin >> temp;
      v.push_back(temp);
    }
    vector<int> pref(v.size() + 1);
    pref[0] = 0;
    int prev = 0;
    for (int i = 1; i <= v.size(); i++) {
      pref[i] = prev + v[i - 1];
      prev = pref[i];
    }
    int ans = 0;
    for (int i = 0; i <= v.size(); i++) {
      for (int j = i + 1; j <= v.size(); j++) {
        if (prime[pref[j] - pref[i]]) {
          ans++;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}