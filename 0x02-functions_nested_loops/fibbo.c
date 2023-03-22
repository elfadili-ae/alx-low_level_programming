// Online C compiler to run C program online
#include <stdio.h>

int main(void)
{
        int m;
         long int x = 1;
         long int y = 2;
         long int sum;
        long int xc=0, yc=0, sumc=0;
        long int max = 100000000;
        //printf("1, ");
        for (m = 1; m < 99; m++)
        {
                printf("%lu", x);

                sum = (x + y) % max;
                sumc = xc + yc + (x+y)/max;
                xc = yc;
                yc = sumc;
                x = y;
                y = sum;
                //x = y;
                //y = sum;
                if (m != 98)
                {
                       printf(", ");
                }
        }
        printf("\n");
        return (0);
}
