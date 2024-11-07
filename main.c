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
        printf("Please enter the positive number: "); // If number is not positive, return 1
        return 1;
    }

    calc(number); // Calls the calc function
    return 0;
}

void calc(int number) // Calculates prime number/s
{
    int factor=2; // Because the smallest prime number is 2
    while(number > 1)
    {
        if(number % factor == 0) 
        {
        printf("%d\n",factor);
        while(number % factor == 0)
         {
            number /= factor;
         }
        }
 factor++;
        if(factor * factor > number)
        {
            if(number > 1)
            {
                printf("%d\n",number);
                break;
            }
        }
    }
}
