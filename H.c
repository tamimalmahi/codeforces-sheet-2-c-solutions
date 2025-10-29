#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int isPrime = 1;
    scanf("%d", &n);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0){
           isPrime = 0; 
        }
    }
    if (isPrime)
    {
        printf("YES");
    } else
    {
        printf("NO");
    }
    return 0;
}
