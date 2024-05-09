#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string findUniqueNumber(int x) {
    if (x > 45) { 
        return "-1";
    }
    vector<int> digits;

    for (int i = 9; i > 0; i--) {
        if (x >= i) {
            digits.push_back(i);
            x -= i;
        }
        if (x == 0) break;
    }
    if (x > 0) {
        return "-1";
    }
    sort(digits.begin(), digits.end());
    string result = "";
    for (int digit : digits) {
        result += to_string(digit);
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << findUniqueNumber(x) << endl;
    }
    return 0;
}
