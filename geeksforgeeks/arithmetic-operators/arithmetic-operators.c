#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    int p = x + y;
    int q = x - y;
    int r = x * y;
    float s = (float) x / y;
    int t = x / y;
    int u = x % y;
    
    printf("%d %d %d %.3f %d %d", p, q, r, s, t, u);

    return 0;
}