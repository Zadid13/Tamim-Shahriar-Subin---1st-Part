/*#include <stdio.h>

int main()

{

    int v, t;

    while (scanf("%d %d", &v, &t) == 2)

    {

        if (v == 0 && t == 0)

            printf("0n");

        else

            printf("%dn", 2 * v * t);
    }

    return 0;
}*/

/*#include <iostream>

using namespace std;

int main()
{
    int v, t;
cin>> v>>t;
   
    while ()
    {
        cout << (2 * v * t) << '\n';
    }
}*/
#include <stdio.h>
int main()
{
    int v,t,s;
    while(scanf("%d %d",&v,&t)==2)
    {
        s=2*v*t;
        printf("%d\n",s);
    }
    return 0;
}
