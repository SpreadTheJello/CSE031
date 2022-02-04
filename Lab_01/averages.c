#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <string.h>

int main(){
    char place[3] = "st";
    float sum_even=0, sum_odd=0, even_c=-1, odd_c=0, average=0, average2=0;
    int c=1, num, d, sum=0, input;
    do{
        printf("Please enter the %d%s integer: ", c, place);
        scanf("%d", &input);
        c = c + 1;

        if(c%10 == 1 && c%100 != 11){
            strcpy(place, "st");
        }
        else if(c%10 == 2 && c%100 != 12){
            strcpy(place, "nd");
        }
        else if(c%10 == 3 && c%100 != 13){
            strcpy(place, "rd");
        }
        else{
            strcpy(place, "th");
        }

        num = abs(input);
        while(num != 0){
            d = num % 10;
            sum = sum + d;
            num = num/10;
        }

        if(sum % 2 == 0){
            sum_even = sum_even + input;
            even_c = even_c + 1;
            sum = 0;
        }
        else{
            sum_odd = sum_odd + input;
            odd_c = odd_c + 1;
            sum = 0;
        }
    }while(input != 0);

    printf("\n");

    average = sum_even / even_c;
    if(average != 0 && average == average){
        printf("Average of inputs whose digits sum up to an even number: %.2f\n", average);
    }

    average2 = sum_odd / odd_c;
    if(average2 != 0 && average2 == average2){
        printf("Average of inputs whose digits sum up to an odd number: %.2f\n", average2);
    }

    if(average2 != average2 && average != average){ // if both are "nan"
        printf("There is no average to compute.");
    }

    return 0;
}