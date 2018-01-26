#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, r;
    while (true) {
        cin >> r >> n;

        if (r==-1) break;

        vector<int> a;
        int tmp;
        for (int i=0; i<n; ++i) {
            cin >> tmp;
            a.push_back(tmp);
        }

        sort(a.begin(), a.end());
        a.resize(unique(a.begin(), a.end()) - a.begin());

        n = a.size();

        if (r==0) {
            cout << n << endl;
            continue;
        }


        int i = 0, ans = 0;
        while (i<n) {
            int beg = a[i++];
            while (i<n && a[i]<=beg+r) ++i;
            ++ans;
            int pos = a[i-1];
            while (i<n && a[i]<=pos+r) ++i;
        }
        cout << ans << endl;

    }
    return 0;
}