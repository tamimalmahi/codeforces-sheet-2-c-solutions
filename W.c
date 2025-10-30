#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int m = 1; m <= 2 * i - 1; m++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = n - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int m = 2 * i - 1; m >= 1; m--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}