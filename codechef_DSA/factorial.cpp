// Archit Singh
// architsingh456@gmail.com
// GitHub : archit-1997

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define line cout << "-------------" << endl;
#define F first
#define S second
#define P pair<ll, ll>
#define PP pair<pair<ll, ll>, ll>
#define V vector<ll>
#define VP vector<pair<ll, ll>>
#define VS vector<string>
#define VV vector<vector<ll>>
#define VVP vector<vector<pair<ll, ll>>>
#define pb push_back
#define pf push_front
#define PQ priority_queue<ll>
#define PQ_G priority_queue<ll, vector<ll>, greater<ll>>
#define line cout << "-------------" << endl;
#define mod 1000000007
#define inf 1e18

#define setbits(x) __builtin_popcount(x)
#define zerobits(x) __builtin_ctzll(x)
#define ps(x, y) fixed << setprecision(y) << x
#define w(x)                                                                   \
  ll x;                                                                        \
  cin >> x;                                                                    \
  while (x--)
#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define ma(arr, n, type) type *arr = new type[n]

void init() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
}

int main() {

  init();

  w(x) {
    ll n;
    cin >> n;
    ll ans = 0;

    for (ll i = 5; n / i >= 1; i *= 5)
      ans += n / i;

    cout << ans << endl;
  }

  return 0;
}