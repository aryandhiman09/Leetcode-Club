#include <stdio.h>

int lonelyinteger(int a[], int n) {

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {

            if (a[i] == a[j]) {
                count++;
            }
        }

        if (count == 1) {
            return a[i];
        }
    }

    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d", lonelyinteger(a, n));

    return 0;
}
