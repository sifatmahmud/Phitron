#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    if (t >= 1 && t <= 1000)
    {
        for (int i = 0; i < t; i++)
        {
            int m1, m2, d;
            scanf("%d %d %d", &m1, &m2, &d);
            if (m1 >= 1 && m1 <= 1000)
            {
                if (m2 >= 0 && m2 <= 1000)
                {
                    if (d >= 1 && d <= 100)
                    {
                        float ans = d - ((m1 * d) / (m1 + m2));
                        printf("%0.0f\n", ans);
                    }
                }
            }
        }
    }

    return 0;
}