#include<stdio.h>

int main(){
    int num, rangeSt, rangeEd, totSum = 0;
    scanf("%d %d %d", &num, &rangeSt, &rangeEd);
    for (int i = 1; i <= num; i++)
    {
        int temp = i;
        int sumOfRem = 0;
        while (temp > 0)
        {
            int rem = temp % 10;
            sumOfRem = sumOfRem + rem;
            temp = temp / 10;
        }
        if (sumOfRem >= rangeSt && sumOfRem <= rangeEd)
        {
            totSum = totSum + i;
        }
        
    }
    printf("%d\n", totSum);
    return 0;
}