#include<stdio.h>

int main () {
    int a;

    scanf("%d", &a);

    if( a != 2 && a % 2 == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
