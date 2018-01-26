#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<char> s;
    char tmp;
    for (int i=0; i<n; ++i) {
        cin >> tmp;
        s.push_back(tmp);
    }


    int l=0, r=n-1, cntline=0;
    while (l<=r) {
        bool lft = true;
        for (int i=0; (i<<1)<=r-l; ++i)
            if (s[l+i]<s[r-i]) 
                break;
            else if (s[l+i]>s[r-i]) {
                lft = false;
                break;
            }
        if (lft)
            cout << s[l++];
        else
            cout << s[r--];
        ++cntline;
        if (cntline==80) {
            cout << endl;
            cntline = 0;
        }
    }

    return 0;
}