// Write a program which calculates the area and circumference of a circle for given radius r.
// Link:  https://vjudge.net/contest/566680#problem/D

#include <stdio.h>

int main() {
    double r, PI = 3.1415926535897;
    scanf("%lf", &r);
    printf("%0.10lf %0.10lf\n", PI * r * r, 2 * PI * r);
    return 0;
}
