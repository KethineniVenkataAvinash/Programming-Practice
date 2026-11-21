#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char s[] = "Unknown";

    switch(n){
        case 1:
        printf("Stop");
        break;
        case 2:
        printf("Standby");
        break;
        case 3:
        printf("Go");
        break;
        default:
        printf(s);
    }

    return 0;
}