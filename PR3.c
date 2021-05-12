#include <stdio.h>
#include <math.h>

int main()
{
	int X,Y,T,Z;
    Y = 4 ;
    X = Y--;
    X = X++;
    X = ++Y;
    T = Z++ + ++Y;
    T += 8;
    T = Z++ + ++Z;
    printf("\nX = %d",X);
        printf("\nY = %d",Y);
        printf("\nZ = %d",Z);

    return 0;
}