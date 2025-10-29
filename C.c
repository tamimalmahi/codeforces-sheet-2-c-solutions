#include<stdio.h>
int main()
{
    int i, n, x, evenCnt, oddCnt, positiveCnt, negativeCnt;

    evenCnt = 0;
    oddCnt = 0;
    positiveCnt = 0;
    negativeCnt = 0;

    scanf("%d", &n);
    for(i = 1;i<= n;i++)
     {
        scanf("%d", &x);

        if(x % 2 == 0) evenCnt++;

        if(x % 2 != 0) oddCnt++;

        if(x > 0) positiveCnt++;

        if(x < 0) negativeCnt++;
     }
    printf("Even: %d\n", evenCnt);
    printf("Odd: %d\n", oddCnt);
    printf("Positive: %d\n", positiveCnt);
    printf("Negative: %d\n", negativeCnt);

    return 0;
}