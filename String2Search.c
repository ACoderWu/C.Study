#include <stdio.h>

int main(){
    char x[10000] = "";
    char s[10000] = "";
    int xs = 0;
    gets(x);
    gets(s);
    int lx = 0;
    for(int i = 0; i < 10000; i++){ 
        lx = i;
        if(x[i] == 0){ 
            break;
        }
    }
    int ls = 0;
    for(int i=0; i < 10000; i++){ 
        ls = i;
        if (s[i] == 0){ 
            break;
        }
    }

    for(int i = 0; i < ls; i++){
        if(s[i] == x[0]){
            int b = 1;
            for(int j = 0; j < lx; j++){ 
                if(x[j] != s[j+i]){
                    b = 0;
                    break;
                }
            }
            if(b == 1){
                printf("%d ",i);
                xs++;
            }
        }
    }
    
    if(xs == 0){
        printf("%d",-1);
    }

    return 0;
}
