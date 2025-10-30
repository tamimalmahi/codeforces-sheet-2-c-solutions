#include<stdio.h>
#include<stdbool.h>

bool isLucky(int n){
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
            return false;
        
        n = n / 10;
    }
    return true;
}

int main(){
    int num1, num2;
    bool found = false;
    scanf("%d %d", &num1, &num2);

    for (int i = num1; i <= num2; i++)
    {
        if (isLucky(i))
        {
            printf("%d ", i);
            found = true;
        }
        
    }
    
    if(!found)
       printf("-1\n");
    
    return 0;
}
