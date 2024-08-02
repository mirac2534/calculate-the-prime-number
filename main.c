#include <stdio.h>
#include <stdlib.h>

void calc(int);
int main()
{
int number;
    printf("Enter the positive random number: ");
    scanf("%d",&number);
    if(number<0)
    {
        printf("Please enter the positive number: ");//if number is not positive, return 1
        return 1;
    }

    calc(number);//call the calc function
    return 0;
}

void calc(int number)//calculate prime number/s
{
    int factor=2;
    while(number>1)
    {
        if(number%factor==0)
        {
        printf("%d\n",factor);
        while(number%factor==0)
         {
            number/=factor;
         }
        }
 factor++;
        if(factor*factor>number)
        {
            if(number>1)
            {
                printf("%d\n",number);
                break;
            }
        }
    }
}
