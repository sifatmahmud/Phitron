#include <stdio.h>

int main()
{
    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);

    // working section
    double cost_1percent = x / (100 - y);

    // int cost = cost_1percent * 100;
    double total_percent = 100 + z;
    double final_price = total_percent * cost_1percent;
    printf("%0.2lf", final_price);
    return 0;
}