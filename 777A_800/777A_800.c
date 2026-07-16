#include <stdio.h>

int main() {
    long long n;
    int x;

    scanf("%lld %d", &n, &x);

    n %= 6;

    for (int start = 0; start < 3; start++) {
        int pos = start;

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                pos = (pos == 0) ? 1 : ((pos == 1) ? 0 : 2);
            } else {
                pos = (pos == 1) ? 2 : ((pos == 2) ? 1 : 0);
            }
        }

        if (pos == x) {
            printf("%d\n", start);
            break;
        }
    }

    return 0;
}