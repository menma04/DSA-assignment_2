// SUBMITTED BY CHETANA SAIKIA 2012026

#include<stdio.h>

int main(){
    int a;
    long a1, a2;
    printf("1)Addition\n2)multiplication\n");
    scanf("%d",&a);
    if(a == 1){
        printf("Enter the two decimal numbers: ");
        scanf("%ld %ld", &a1, &a2);
        long long sum = a1 + a2;
        printf(" sum : %lld\n", sum);
    }
    else if(a == 2){
        printf("Enter the two decimal numbers: ");
        scanf("%ld %ld", &a1, &a2);
        long long product = a1 * a2;
        printf(" product : %lld\n", product);
    }
    return 0;
}
