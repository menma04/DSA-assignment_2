// SUBMITTED BY CHETAA SAIKIA 2012026

#include<stdio.h>
#include<string.h>

int ro_NUM(char RO){

    int ToDec;

    switch(RO){
        case 'I': ToDec = 1; break;
        case 'V': ToDec = 5; break;
        case 'X': ToDec = 10; break;
        case 'L': ToDec = 50; break;
        case 'C': ToDec = 100; break;
        case 'D': ToDec = 500; break;
        case 'M': ToDec = 1000; break;
        case '\0': ToDec = 0; break;
        default: ToDec = -1;
    }
    return ToDec;
}

long long ToDec(char *ro){
    int i = 0;
    long long number = 0;
    while (ro[i]){
        if(ro_NUM(ro[i]) < 0){
            return -1;
        }

        if((strlen(ro) - i) > 2){
            if(ro_NUM(ro[i]) < ro_NUM(ro[i + 2])){
                return -1;
            }
        }

        if(ro_NUM(ro[i]) >= ro_NUM(ro[i + 1])){
            number += ro_NUM(ro[i]);
        } else {
            number += ro_NUM(ro[i + 1]) - ro_NUM(ro[i]);
            i++;
        }
        i++;
    }
    return number;
}

int toRoman(long long NO){
    if(NO <= 0){
        return -1;
    }
    while(NO != 0){

        if (NO >= 1000) {
            printf("M");
            NO -= 1000;
        }

        else if (NO >= 900){
            printf("CM");
            NO -= 900;
        }

        else if (NO >= 500){
            printf("D");
            NO -= 500;
        }

        else if (NO >= 400){
            printf("CD");
            NO -= 400;
        }

        else if (NO >= 100){
            printf("C");
            NO -= 100;
        }

        else if (NO >= 90){
            printf("XC");
            NO -= 90;
        }

        else if (NO >= 50){
            printf("L");
            NO -= 50;
        }

        else if (NO >= 40){
            printf("XL");
            NO -= 40;
        }

        else if (NO >= 10){
            printf("X");
            NO -= 10;
        }

        else if (NO >= 9){
            printf("IX");
            NO -= 9;
        }

        else if (NO >= 5){
            printf("V");
            NO -= 5;
        }

        else if (NO >= 4){
            printf("IV");
            NO -= 4;
        }

        else if (NO >= 1){
            printf("I");
            NO -= 1;
        }

    }
    return 1;
}

int main(){
    int a;
    printf("1) addition\n2) multiplication\n");
    scanf("%d",&a);
    if(a == 1){
        char ro1[1000], ro2[1000];
        printf("Enter two roman numbers: ");
        scanf("%s %s", ro1, ro2);
        long long decimal1 = ToDec(ro1);
        long long decimal2 = ToDec(ro2);
        if(decimal1 == -1 || decimal2 == -1){
            printf("invalid\n");
        }
        else {
            long long sum = decimal1 + decimal2;
            printf("sum : ");
            toRoman(sum);
            printf("\n");
        }
    }
    else if(a == 2){
        char ro_name[1000], ro_name2[1000];
        printf("Enter two roman numbers: ");
        scanf("%s %s", ro_name, ro_name2);
        long long dec1 = ToDec(ro_name);
        long long dec2 = ToDec(ro_name2);
        if(dec1 == -1 || dec2 == -1){
            printf("invalid");
        }
        else{
            long long product = dec1 * dec2;
            printf("product: ");
            toRoman(product);
            printf("\n");
        }
    }
    return 0;
}
