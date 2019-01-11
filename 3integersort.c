#include <stdio.h>

int main()
{ 
    int integers[3] = {0};
    int *integer = &integers[0];
    int temp = 0;
    for(int i = 0; i < 3; i++)
    { 
        scanf("%d",&integers[i]);
    }
    for(int i = 0; i < 2; i++)
    { 
        for(int j = i; j < 2; j++)
        { 
            if(*(integer+i) > *(integer+i+1))
            {    
                temp = *(integer+i);
                *(integer+i) = (*(integer+i+1));
                *(integer+i+1) = temp;
            }
        }
    }

    for(int i = 0; i < 3; i++)
    { 
        printf("%d",integers[i]);
        if(i < 2)
        { 
            printf(" ");
        }
    }

    return 0;
}
