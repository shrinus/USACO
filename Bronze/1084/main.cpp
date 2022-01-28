#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int num[n];
    int odds = 0;
    int maxgroups = 0;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
        odds += num[i] % 2;
    }
    int evens = n - odds;

    int addmore = 0;
    if (odds > evens) {
        odds -= evens;
        maxgroups += (2 * evens);
        if (odds % 3 == 2) {
            addmore = (2 * odds - 1) / 3;
        } else if (odds % 3 == 0) {
            addmore = (2 * odds) / 3;
        } else if (odds % 3 == 1) {
            addmore = (2 * odds - 5) / 3;
        }
        maxgroups += addmore;
    } else if (evens > odds) {
        maxgroups += (2 * odds) + 1;
    }

    cout << maxgroups;

    return 0;
}