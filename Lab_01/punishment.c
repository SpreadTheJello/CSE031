#include <stdio.h>
#include <strings.h>

int main(){
    char str[10] = "";
    char str2[10] = "";
    int repeat, typo, bool = 1, bool2 = 0;
    while(bool == 1){
        if(bool2 == 0){
            printf("\nEnter the number of times to repeat the punishment phrase%s: ", str2);
            scanf("%d", &repeat);
        }
        if(repeat > 0){
            printf("\nEnter the repetititon line where you want to introduce the typo%s: ", str);
            scanf("%d", &typo);
            if(typo > 0 && typo <= repeat){
                bool = 0;
                printf("\n");
                for(int i = 1; i < repeat + 1; i = i + 1){
                    if(i == typo){
                        printf("Progranming in c is phun!\n");
                    }
                    else{
                        printf("Programming in C is fun!\n");
                    }
                }
            }
            else{
                printf("You entered an invalid value for the typo placement!");
                strcpy(str, " again");
                bool2 = 1;
            }
        }
        else{
            printf("You entered an invalid value for the number of repetitions!");
            strcpy(str2, " again");
        }
    }
    return 0;
}


