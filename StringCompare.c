#include <stdio.h>
#define Max_Length 10000

int compare();

int main(){ 
    char max[Max_Length] = "";
    char in[Max_Length] = "";
    gets(in);
    gets(max);
    int *p = &max[0];

    for(){ 
        if ( *(p+i) == in[0] )
        { 
            compare( *(p+i), in, i);
        }
   }

   return 0;
}
