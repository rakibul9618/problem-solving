#include<stdio.h>

const int maxVal = 123;

int main () {

    int arr[maxVal][maxVal];
    int n, m;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &m);
            arr[i][j] = m;
        }
    }

    int primaryDiagonal, secondaryDiagonal;

    for (int i = 0; i < n; ++i) {
        primaryDiagonal += arr[i][i];
    }

    for (int i = 0, j = n -1; i < n; ++i, j--) {
        secondaryDiagonal += arr[i][j];
    }

    int sum = primaryDiagonal - secondaryDiagonal;

    if(sum < 0) sum *= -1;

    printf("%d\n", sum);

    return 0;
}