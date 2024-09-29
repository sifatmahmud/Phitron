#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a>=0)
    {
        if(a%2 == 0){
            printf("even");
        }
        else{
            printf("odd");
        }
    }
    else if (a<0)
    {
        printf("You have entered a negative number!");
    }

    else
    {
        printf("Your input may wrong!");
    }
    return 0;
}