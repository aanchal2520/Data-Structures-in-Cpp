#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) return n;

    int tn2 = 0, tn1 = 1, tn;

    for(int i = 2; i < n + 1; i++) {
        tn = tn1 + tn2;
        tn2 = tn1;
        tn1 = tn;
    }

    return tn;
}

int main() {
    cout << fib(10) << endl;
}

// Time Complexity: O(n)
// Space Complexity: O(1)