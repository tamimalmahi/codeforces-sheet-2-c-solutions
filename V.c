#include<stdio.h>

int main(){
    int n, i, p = 0;
    scanf("%d", &n);
    
    for (int j = 1; j <= n; j++)
    {
        for (i = 1; i <= 3; i++)
        {
            printf("%d ", p + i);
        }
        printf("PUM\n");
        p = p + 4;
    }
    return 0;
}