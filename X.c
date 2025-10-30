#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int num, newNum = 0, count = 0;
        scanf("%d", &num);
        while (num > 0)
        {
            if (num % 2 == 1)
                count++;
            num = num / 2;
        }
        for (int j = 1; j <= count; j++)
        {
            newNum = newNum + pow(2, count - j);
        }
        printf("%d\n", newNum);
    }
    return 0;
}