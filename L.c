#include<stdio.h>
int main(){
    int num1, num2, maxOfNum, maxOfDiv = 0;
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        maxOfNum = num1;
    } else
    {
        maxOfNum = num2;
    }
    
    for (int i = 1; i <= maxOfNum; i++)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {

            if (maxOfDiv < i)
            {
                maxOfDiv = i;
            }
            
        }
        
    }

    printf("%d\n", maxOfDiv);

    return 0;
}