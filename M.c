#include<stdio.h>
int main(){
    int lucky[4] = {4, 7, 47, 744};
    int a, b, luckyCount = 0;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == lucky[j])
            {
                printf("%d ", lucky[j]);
                luckyCount++;
            }
            
        }
        
    }

    if (luckyCount == 0)
    {
        printf("-1\n");
    }
    
    return 0;
}