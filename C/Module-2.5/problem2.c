#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d",&a, &b);
    int sum = a + b; 
    int sub = a - b; 
    int multi = a * b; 
    float divi = (1.0*a) / b; 

    printf("%d %c %d %c %d",a ,'+', b, '=', sum);
    printf("\n");
    printf("%d %c %d %c %d",a ,'-', b, '=', sub );
    printf("\n");
    printf("%d %c %d %c %d",a ,'*', b, '=', multi );
    printf("\n");
    printf("%d %c %d %c %0.2f",a ,'/', b, '=', divi );
    return 0;
}