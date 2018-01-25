#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int num_cases, l, n;
    cin >> num_cases;

    while (num_cases--) {
        cin >> l >> n;
        int x = INT_MIN, y = INT_MIN, p;
        while (n--) {
            cin >> p;
            x = max(x, min(p, l-p));
            y = max(y, max(p, l-p));
        }
        printf("%d %d\n", x, y);
    }

    return 0;
}