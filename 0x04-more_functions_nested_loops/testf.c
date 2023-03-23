#include <stdio.h>

int main(void)
{
         long int num = 612852475143;
        long int counter = 0;
        long int i;
        long int j;

    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            printf("big");
            if(counter < i)
                counter = i;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    break;
                }
            }
        }
    }

    printf("big = %ld\n", counter);
}
