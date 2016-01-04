#include <stdio.h>
#include <math.h>

double sec(double x)
{
    return 1/cos(x*M_PI/180);
}

double f(double x) {
    return (x-tan((2.*x-2.)*M_PI/180));
}

double f_prime(double x) {
    return 1. - 2. * pow( sec(2.*x-2), 2);
}

double computeNextX(double oldX) {
    return oldX - f(oldX) / f_prime(oldX);
}

int main()
{
    double epsilon = 1e-4;
    double x_prev = 0.0;
    double x_next = 1000007; // a large number

    while(fabs( f(x_next) ) > epsilon)
    {
        x_next = x_prev - f(x_prev) / f_prime(x_prev);

        printf("x=%.4f f(x)=%.4f f'(x)=%.4f\n",
               x_next, f(x_next), f_prime(x_next));

        x_prev = x_next;
    }

    return 0;
}
