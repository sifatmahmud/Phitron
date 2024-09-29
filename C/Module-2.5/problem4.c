#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if (a==0)
    {
        printf("zero");
    }
    else if (a<0)
    {
        printf("negative");
    }
    else
    {
        printf("positive");
    }
    
    

    
    return 0;
}