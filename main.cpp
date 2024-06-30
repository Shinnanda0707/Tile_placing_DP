#include <bits/stdc++.h>
using namespace std;

int n;
int b[10000000] = {0};

int f(int m) {
    if (b[m - 1] == 0) b[m - 1] = f(m - 1) + 2 * f(m - 2);
    return b[m - 1];
}

int main() {
    b[0] = 1; b[1] = 3;
    printf("n = ");
    scanf("%d", &n);
    printf("a_n = %d", f(n));

    return 0;
}
