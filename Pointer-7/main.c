#include <stdio.h>
#include <stdlib.h>

void cubeByReference( int *nPtr ); /* prototype */

int main( void )
{
    int number = 5; /* initialize number */

    printf( "The original value of number is %d", number );

    /* pass address of number to cubeByReference */
    cubeByReference( &number );

    printf( "\nThe new value of number is %d\n", number );
    return 0; /* indicates successful termination */
}

/* calculate cube of *nPtr; modifies variable number in main */
void cubeByReference( int *nPtr )
{
    *nPtr = *nPtr * *nPtr * *nPtr; /* cube *nPtr */
}
