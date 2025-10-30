#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n - j; i++)
        {
            printf(" ");
        }
        for (int m = 1; m <= 2 * j - 1; m++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}