#include<stdio.h>

int main(){
    int tk;
    scanf("%d", &tk);

    if(tk>= 100){
        printf("Burger khabo");
    }
    else if (tk>=50)
    {
        printf("Fuchka khabo");
    }
    else if (tk>=20)
    {
        printf("Amshotto khabo");
    }
    else
    {
        printf("Khabo na");
    }
    
    
    return 0;
}