#include<stdio.h>

int main(){
    int n;
    char symble;

    scanf("%c", &symble);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        for (int j = 1; j <= num; j++)
        {
            printf("%c", symble);
        }
        printf("\n");
    }
    
    return 0;
}