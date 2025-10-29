#include<stdio.h>

unsigned long long factoorialFunc(int n){
    unsigned long long fact = 1;

    for (int j = 1; j <= n; j++)
        {
            fact = fact * j;
        }
    return fact;
}

int main(){
    int testCase, num;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &num);
        printf("%d\n", factoorialFunc(num));
    }

    return 0;
}