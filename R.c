#include<stdio.h>

int main(){
    while(1)
    {
        int num1, num2;
        scanf("%d %d", &num1, &num2);

        if (num1 > 0 && num2 > 0)
        {
            int small = (num1 < num2) ? num1 : num2;
            int large = (num1 < num2) ? num2 : num1;
            int sum = 0;
            for (int i = small; i <= large; i++)
            {
                printf("%d ", i);
                sum = sum + i;
            }
            printf("sum =%d", sum);
            printf("\n");
        } else
        {
            break;
        }

    }
    return 0;   
}