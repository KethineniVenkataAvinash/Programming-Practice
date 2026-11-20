#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char num[] = "Number";
    char big[] = "Big";
    if(n<=100){
        printf("%s", num);
    } else {
        printf("%s\n%s", big, num);
    }
    return 0;
}