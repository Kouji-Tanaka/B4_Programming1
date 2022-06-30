#include "../include/sub.h"

/*(1)*/
int sigma(int n)
{
    int ans=0;
    for(int k=1; k<=n; k++)
    {
        ans += k*k;
    }
    return ans;
}

/*(2)*/
double product(int n)
{
    float ans=1.0;
    for(float k=1.0; k<=n; k++)
    {
        ans *= 1/(k*k);
    }
    return ans;
}

/*(3)*/
int factrial(int n)
{
    int ans=1;
    for(int k=1; k<=n; k++)
    {
        ans *= k;
    }
    return ans;
}

/*(4)*/
int convination(int n, int m)
{
    int ans, num=1, den=1;

    for(int k=0; k<m; k++)
    {
        num *= n-k;
    }

    for(int l=1; l<=m; l++)
    {
        den *= l;
    }

    ans = num/den;

    return ans;
}
