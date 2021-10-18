//SUBMITTED BY CHETANA SAIKIA

#include<stdio.h>
#include<string.h>

int isValid(char unary[]){
    int i = 0;
    while(unary[i]){
        if(unary[i]!= '1'){
            return -1;
        }
        i++;
    }
    return 1;
}

int main(){
    int n;
    char u1[500], u2[500];
    printf("1) addition\n2) multiplication\n");
    scanf("%d",&n);
    if(n == 1) {
        printf("Enter two unary numbers: ");
        scanf("%s %s", u1, u2);
        if(isValid(u1) == 1 && isValid(u2) == 1){
            strcat(u1, u2);
            printf("The sum is %s\n", u1);
        }
    }
    else if(n == 2){
        printf("Enter two unary numbers: ");
        scanf("%s %s", u1, u2);
        if(isValid(u1) == 1 && isValid(u2) == 1){
            printf("The product is: ");
            for(int i=0; i<strlen(u2); i++){
                printf("%s", u1);
            }
            printf("\n");
        }
    }
    return 0;
}
