#include <iostream>
using namespace std;

int getLuckiness(int n) {
    int largest = 0, smallest = 10;
    while (n > 0) {
        int digit = n % 10;
        largest = max(largest, digit);
        smallest = min(smallest, digit);
        n /= 10;
    }
    return largest - smallest;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int maxLuckiness = -1, ans;
        for (int i = l; i <= r; i++) {
            int luckiness = getLuckiness(i);
            if (luckiness > maxLuckiness) {
                maxLuckiness = luckiness;
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
