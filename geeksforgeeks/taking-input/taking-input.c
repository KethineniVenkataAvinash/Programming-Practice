#include <math.h>
#include <stdio.h>

int main() {
    char s[1000];
    int n;
    float f;
    int ff; // To Store floor of float variable f

    scanf("%[^\n] %d %f", s, &n, &f);
    ff = (int)floor(f);
    
    printf("%s\n", s);
    printf("%d\n", n);
    printf("%d\n", ff);

    return 0;
}