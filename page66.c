/* 
#include <stdio.h>
int main()
{
    int n = 6;
    int i;
    for (i=1; i <= 10; i = i + 1)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int n=5;
    int i=1;
    for(; ;){
        if (i>10){
            break;
        }

        printf("%d X %d=%d\n",n,i,n*i);
        i=i++;
        return 0;
    }
    return 0;
}
