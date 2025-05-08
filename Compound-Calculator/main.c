#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   double P;
   double r;
   double A;
    int n;
    int t;


    printf("Enter your begining price (P): ");
    scanf("%lf", &P);

    printf("Enter the annual interest rate in %% (example. 8 %%): ");
    scanf("%lf", &r);
    r = r / 100.0;

    printf("Enter the number of accruals per year. (n): ");
    scanf("%d", &n);

    printf("Enter the investment duration in years. (t): ");
    scanf("%d", &t);

    A = P * pow(1 + r / n, n * t);

    // შედეგის გამოტანა
    printf("The final amount will be: %.2f gel\n", A);

}
