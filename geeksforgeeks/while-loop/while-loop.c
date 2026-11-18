#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n>=0 && n<=100){
        int i = 0;
        while(i<=n){
            printf("%d ", i);
            i++;
        }
    }
    return 0;
}
