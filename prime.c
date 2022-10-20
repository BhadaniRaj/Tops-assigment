#include <stdio.h>
int main()
{
    int num;

    printf("Enter number");
    scanf("%d" , &num);
    
    if(num==2)
    {
        if(num % 2 ==0)
        {
            printf("Number is prime number");
        }
    
    }
    else
    {
        printf("Number is not prime ");
    }
    return 0 ;
}