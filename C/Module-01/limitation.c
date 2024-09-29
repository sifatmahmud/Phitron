#include<stdio.h>

int main(){

    // ---- limitation of int ----
    int a = 1000000000;
    long long int b = 1000000000111;

    // printf("%d", a);
    // printf("%lld", b);

    // ------ limitation of float ----

    float g = 2005.556684594;
    double h = 2.123456785945687;
    printf("%0.15lf", h);
    return 0;
}