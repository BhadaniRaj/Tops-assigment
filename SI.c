#include <stdio.h>
int main()
{
    int amount;
    int rate;
    int time;
    int SI;
    printf("Enter your amount , Rate of interest , Time");
    scanf("%d %d %d" ,&amount , &rate , &time );
    SI = (amount * rate * time)/100;
    printf  ("Your intrest is : %d" , SI);
    return 0 ;
}
