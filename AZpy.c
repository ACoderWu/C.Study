#include <stdio.h>

int main(){
    char s = 'A';
    for(int i = 1; i< 7; i++){
        for(int j = 0; j < i; j++){
            printf("%c",s++);
        }
        printf("\n");
    }
    return 0;
}