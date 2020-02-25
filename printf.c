/* 
Write a program which:

1. declares and initializes an integer variable x with 2138, and prints its value over 9 places
2. declares and initializes a float variable y with -52.35892, and prints 
its value over 11 places with a floating point precision of 5
3. declares and initializes a char variable z with 'G', and prints it
4.  declares and initializes a double u with 61.295339687, and prints its
value with a floating point precision of 7 

*/

#include <stdio.h>
int main()
{

    int x= 2138;
    printf ("x=%9d\n", x ); 
    float y=-52.35892;
    printf ("y=%11.5f\n", y );
    char z= 'G';
    printf("z=%c\n", z);
    double u= 61.295339687;
    printf("u=%.7lf\n",u );
    return 0;
}
/*
should print:
x=     2138 // printed over 9 places as 4 are taken by the digits and the first 5 are the spaces 
y=  -52.35892 // printed over 11 places as 9 are taken by the digits(including - and .) and the first 2 are spaces
z=G
u=61.2953397 // precison of 7 as the number of digits after decimal are 7 
*/

/*when you want to print a number over some number of spaces x you put this x after
the percentage as %x and when you want a precision of y you put it after that as 
%x.y */
