#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long temp;
        scanf("%lld", &temp);
            if (temp == 0)
                printf("0 ");
            else
            {
                while (temp > 0)
                {
                    int rem = temp % 10;
                    printf("%d ", rem);
                    temp = temp / 10;
                }
            }
        
        printf("\n");
    }
    return 0;
}