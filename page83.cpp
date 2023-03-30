#include <stdio.h>
int main()

{
    int a,x,gcd;
    printf("Enter the values:");
    scanf("%d %d", &a,&x );
    for(a=0;a<=100;a++){
    if(a%x==0){
        printf("gcd is %d\n",gcd);

    }
    else{
    printf("gcd is invalid\n");
    }

    }
return 0;
}