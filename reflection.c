#include <stdio.h>
#include <math.h>

void CheckTuple(int n)
{
    int k = sqrt(n/2.0);
    int i;
    for (i = 1; i <= k; i++) {
        int tmp = sqrt((double)(n - i * i));
        if ((tmp * tmp) == (n - i * i)) {
            printf("YES\n");
            return;
        }


    }
    printf("NO\n");
    return;
}


int main(int argc, char *argv[])
{
    CheckTuple(8)

    /*int t,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        if(n==2)
        {
            printf("NO\n");
        }
        else
            CheckTuple(n);
    }
*/
    return 0;
}