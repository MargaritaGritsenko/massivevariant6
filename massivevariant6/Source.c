#include <stdio.h>
#include <math.h>
#define N 100
void main()
{
    double znach;
	float A[N];
    double x = 1;
    double shag = 2./ N;
    while (x <= 3)
    {
        for (int i = 0; i < N; i++)
        {
            znach = pow(x, 3) - 4 * pow(x, 2) + 2;
            A[i] = znach;
            printf("a[%d] = %lf\n", i + 1, znach);
            x += shag;
        }
    }
}