#include <iostream>
using namespace std;

int tribonacci(int n) {
    if (n == 0) return n;
    if (n <= 2) return 1;

    int t0 = 0, t1 = 1, t2 = 1, tn;

    for (int i = 3; i < n + 1; i++) {
        tn = t0 + t1 + t2;
        t0 = t1;
        t1 = t2;
        t2 = tn;
    }

    return tn;
}

int main() {
    cout << tribonacci(10) << endl;
}

// Time Complexity: O(n)
// Space Complexity: O(1)