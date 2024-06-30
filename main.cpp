#include <bits/stdc++.h>
using namespace std;

int n;
long long b[67] = {0};

long long f(long long m) {
    if (b[m - 1] == 0) b[m - 1] = f(m - 1) + 2 * f(m - 2);
    return b[m - 1];
}

int main() {
    b[0] = 1; b[1] = 3;
    printf("n = ");
    scanf("%d", &n);
    printf("a_n = %lld", f(n));

    return 0;
}
