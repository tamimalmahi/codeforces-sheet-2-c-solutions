#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int start = (a < b) ? a : b;
        int end = (a < b) ? b : a;
        int sum = 0;
        start = start + 1;
        for (int j = start; j < end; j++)
        {
            if (j % 2 != 0)
            {
                sum = sum + j;
            }
            
        }
        printf("%d\n", sum);
    }
    return 0;
}