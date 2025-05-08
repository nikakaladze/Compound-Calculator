#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double principal;
    double rate;
    double years;
    int timeCompounded;
    double total;
    
    printf("Compound Interest Calculator\n");
    printf("Enter the Principal Amount (p): ");
    scanf("%lf",&principal);
    printf("Enter the interest rate % (r): ");
    scanf("%f",&rate);
    rate = rate / 100;
    printf("Enter the # of years (t): ");
    scanf("%lf",&years);
    printf("Enter # times compound per year (n): ");
    scanf("%d",&timeCompounded);
    total = principal *pow(1 + rate / timeCompounded,timeCompounded * years);
    printf("after  %d years,the total will be $%.3lf",years,total);
    





    

    return 0;


}
