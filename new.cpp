#include <stdio.h>
 
int main() {
    int sum = 0, i;
    for ( i = 0; i <= 10; i++ ) {
        sum = sum + i;
    }
    printf ( "The total is: %d", sum );
}