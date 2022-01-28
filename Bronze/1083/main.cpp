#include <iostream>

using namespace std;

int main() {
    string a;
    string h;
    cin >> a >> h;
    int arr[h.size()];

    for (int i = 0; i < h.size(); i++) {
        arr[i] = a.find(h[i]);
    }

    int m = arr[0];
    int n = 0;

    for (int i: arr) {
        if (i <= m) {
            m = i;
            n++;
        } else {
            m = i;
        }
    }

    cout << n;
    return 0;
}