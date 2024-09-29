#include<stdio.h>

int main(){

    int sifat, rifat;
    char c;
    float f;
    // scanf("%d", &sifat);
    // printf("%d", sifat);

    // scanf("%d %f %c", &sifat, &f, &c);
    // printf("%d %0.1f %c", sifat, f, c);


// ------ Take "%" input ------
// --------- 1st method -----------
    // int a, b;
    // char p;

    // scanf("%d%c %d%c", &a, &p, &b, &p);
    // printf("%d%c %d%c", a, p, b, p);

// ----------- 2nd method ------------
    int a, b;

    scanf("%d%% %d%%", &a, &b);
    printf("%d%% %d%%", a, b);

    
    return 0;
}