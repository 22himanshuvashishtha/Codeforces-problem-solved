#include <iostream>
using namespace std;

long long maxBurlesSpent(long long s) {
    long long totalSpent = s;
    while (s >= 10) {
        long long spend = s / 10 * 10;  
        long long cashback = spend / 10;
        totalSpent += cashback;  
        s = (s % 10) + cashback;  
    }
    return totalSpent;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long s;
        cin >> s;
        cout << maxBurlesSpent(s) << endl;
    }
    return 0;
}
