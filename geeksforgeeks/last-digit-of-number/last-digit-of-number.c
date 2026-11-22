#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int l = abs(n % 10);
    printf("%d", l);

    return 0;
}