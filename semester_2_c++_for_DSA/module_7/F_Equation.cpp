//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
#include <bits/stdc++.h>

using namespace std;

long long int power(int base, int exponent) {
    long long int result = 1;
    while (exponent > 0) {
        result *= base;
        exponent--;
    }
    return result;
}

int main() {
    int X, N;
    cin >> X >> N;

    long long int result = 0;
    for (int i = 0; i <= N; i += 2) {
        result += power(X, i);
    }

    cout << result-1 << std::endl;

    return 0;
}
