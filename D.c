#include<stdio.h>
int main(){
    int input;
    do
    {
        input = 0;
        scanf("%d", &input);
        if (input != 1999)
        {
            printf("Wrong\n");
        } else{
            printf("Correct\n");
        }
        
    } while (input != 1999);
    
return 0;
}