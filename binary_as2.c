// SUBMITTED BY CHETANA SAIKIA 2012026


#include<stdio.h>

long long product(long long a1, long long a2)
{
    int i = 0, re = 0, su_rs[20];
    long long product = 0;

    while (a1 != 0 || a2 != 0)
    {
        su_rs[i++] = (a1 % 10 + a2 % 10 + re) % 2;
        re = (a1 % 10 + a2 % 10 + re) / 2;
        a1 = a1 / 10;
        a2 = a2 / 10;
    }
    if (re != 0)
        su_rs[i++] = re;
    --i;
    while (i >= 0)
        product = product * 10 + su_rs[i--];
    return product;
}

int main(){
    int n;
    printf("1) Addition\n2) Multiplication\n");
    scanf("%d",&n);
    if(n == 1){
        long a1, a2;
        printf("Enter two binary numbers: ");
        scanf("%ld %ld", &a1, &a2);

        int i = 0, remainder = 0, sum[20];

        while (a1 != 0 || a2 != 0){
            sum[i++] = (a1 % 10 + a2 % 10 + remainder) % 2;
            remainder = (a1 % 10 + a2 % 10 + remainder) / 2;
            a1 = a1 / 10;
            a2 = a2 / 10;
        }
        if (remainder != 0)
            sum[i++] = remainder;
        --i;
        printf("The sum is: ");
        while (i >= 0)
            printf("%d", sum[i--]);
        printf("\n");
    }
    else if(n == 2){
        long long a1, a2, multiply = 0;
        printf("Enter two binary numbers: ");
        scanf("%lld %lld", &a1, &a2);
        int digit, factor = 1;

        while (a2 != 0){
            digit = a2 % 10;
            if (digit == 1){
                a1 = a1 * factor;
                multiply = product(a1, multiply);
            }
            else
                a1 = a1 * factor;
            a2 = a2 / 10;
            factor = 10;
        }
        printf("The product is: %lld\n", multiply);
    }
    return 0;
}
