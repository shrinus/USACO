#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    ll b[n];
    ll f[n];
    ll ans = 1;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (ll i = 0; i < n; i++) {
        f[i] = 0;
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            if(a[i] <= b[j]){
                f[i]++;
            }
        }
    }
    sort(f, f + n);
    for (ll i = 0; i < n; i++) {
        ans *= (f[i] - i);
    }

    cout << ans;
    return 0;
}