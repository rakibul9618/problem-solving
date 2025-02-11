#include<stdio.h>

const int maxL = 100123;


int main () {

    int arr[maxL] = {false};
    int n,m;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        for( int j = 0; j < m; j++) {
            int input;
            scanf("%d", &input);
            arr[input] = true;
        }
    }

    int desiredValue;
    scanf("%d", &desiredValue);

    if(arr[desiredValue]) printf("will not take number\n");
    else printf("will take number\n");


    return 0;
}