#include <stdio.h>

int main(){
    for(int i = 0; i < 4; i++){
        for(int x = i; x > 0; x--){
            printf(" ");
        }
        for(int j = 4; j > i; j--){
            printf("*");
            if(j > i + 1){
                printf(" ");
            }
        }
        if(i < 3){
            printf("\n");
        }
    }
    return 0;
}