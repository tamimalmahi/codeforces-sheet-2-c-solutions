#include<stdio.h>
int main()
{
   int num, temp, sum = 0, r;
   scanf("%d", &num);
   temp = num;

   do
   {
       r = temp % 10;
       sum = sum * 10 + r;
       temp = temp / 10;
   } while (temp != 0);
   
    if(num == sum)
        printf("%d\nYES", sum);
    else
        printf("%d\nNO", sum);


    return 0;
}