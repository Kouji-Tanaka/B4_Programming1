#include <stdio.h>
#include "sub.h"

int main(void)
{
    int n=10;/*任意の整数を入力*/
    int m=5;/*任意の整数を入力*/

    if(n<1)
    {
        printf("Bad number n has been entered.\n");
    }
    else if (m<0 || m>n)
    {
        printf("Bad number m has been entered.\n");
    }
    else
    {
        printf("n=%d\tm=%d\n", n, m);
        printf("(1)\tans=%d\n", sigma(n));
        printf("(2)\tans=%le\n", product(n));
        printf("(3)\tans=%d\n", factrial(n));
        printf("(4)\tans=%d\n", convination(n, m));
    }
}
