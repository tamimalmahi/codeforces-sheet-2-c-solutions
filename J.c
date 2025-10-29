#include <stdio.h>
#include <math.h>

int main()
{
    int n, x;

    scanf("%d", &n);

    for(int i = 2; i <= n; i++)
    {
        x = 1;

        for(int j = 2; j <= sqrt(i); j++)
        {

            if(i % j == 0)
            {
                x = 0;
                break;
            }
        }

        if(x == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}