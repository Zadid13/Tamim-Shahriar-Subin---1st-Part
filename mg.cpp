/*#include<iostream>
using namespace std;
int main()
{
    int i,N,sum=0;
    i=0;
    cout<<"Enter the last number of the series: ";
    cin>> N;
    cout<<"1+2+......+"<<N;
    for(i=1; i<=N;i=i+1){
        sum = sum + i;
    }cout<<sum;
    return 0;
}*/

#include <stdio.h>

int main()
{
    int num, count, sum = 0;

    printf("Enter a positive number\n");
    scanf("%d", &num);

    printf("\nNatural Numbers from 1 to %d are:\n", num);

    for (count = 1; count <= num; count++)
    {
        printf("%d\n", count);
        sum = sum + count;
    }

    printf("\nSum of natural numbers from 1 to %d is: %d\n", num, sum);

    return 0;
}
