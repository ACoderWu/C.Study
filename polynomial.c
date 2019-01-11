/*
一个多项式可以表达为x的各次幂与系数乘积的和，比如：
2x6+3x5+12x3+6x+20
现在，你的程序要读入两个多项式，然后输出这两个多项式的和，也就是把对应的幂上的系数相加然后输出。
程序要处理的幂最大为100。
*/

#include <stdio.h>

int main ()
{
    //Define and assign arrays.
    int a[2][101];
    for(int i = 0; i < 101; i++)
    {
    a[0][i] = i;
    a[1][i] = 0;
    }
    int b[2][101];
    for(int i = 0; i < 101; i++)
    {
    b[0][i] = i;
    b[1][i] = 0;
    }
    int c[2][101];
    for(int i = 0; i < 101; i++)
    {
    c[0][i] = i;
    c[1][i] = 0;
    }

    //input value of coefficient and assign array.
    int s1 = 1;
    int s2 = 0;
    do
    {
        scanf("%d %d",&s1,&s2);
        a[1][s1] += s2;
    }
    while (s1 != 0);
    int s3 = 0;
    int s4 = 0;    
    do
    {
        scanf("%d %d",&s3,&s4);
        b[1][s3] += s4;
    }
    while (s3 != 0);

    //Add polynomials.
    for (int i = 0; i < 101; i++)
    {
        c[1][i] = a[1][i] + b[1][i];
    }

    //output the polynomial added.
    int addp = 0;
    for(int i = 0; i < 101; i++)
    {
        if (c[1][i] != 0)
        {
            addp = 1;
            break;
        }
    }
    if(addp == 0)
    {
        printf("0");
    }
    else
    {
        int k = 0;
        for (int i = 100; i > -1; i--)
        {
            /*
            if (c[1][i] > 1 && c[0][i] > 1)
            {
                printf("%dx%d+",c[1][i],c[0][i]);
            }
            else if (c[1][i] == 1 && c[0][i] > 1)
            {
                printf("x%d+",c[0][i]);
            }
            else if (c[1][i] > 1 && c[0][i] == 1)
            {
                printf("%dx+",c[1][i]);
            }
            else if (c[1][i] == 1 && c[0][i] == 1)
            {
                printf("x+");
            }
            else if (c[1][i] > 0 && c[0][i] == 0)
            {
                printf("%d",c[1][i]);
            }
            */

            //Determine whether to output positive sign.
            if (c[1][i] != 0)
            {
                k++;
            }
            if (c[1][i] > 0)
            {
                if ( k > 1)
                {
                    printf("+");
                }
            }

            //output the final result of polynomial.
            if (c[0][i] > 1)
            {
                if (c[1][i] > 1)
                {
                    printf("%dx%d",c[1][i],c[0][i]);
                }
                else if (c[1][i] == 1 )
                {
                    printf("x%d",c[0][i]);
                }
                else if (c[1][i] == -1 )
                {
                    printf("-x%d",c[0][i]);
                }
                else if (c[1][i] < -1 )
                {
                    printf("%dx%d",c[1][i],c[0][i]);
                }
            }
            else if (c[0][i] == 1)
            {
                if (c[1][i] > 1)
                {
                    printf("%dx",c[1][i]);
                }
                else if (c[1][i] == 1 )
                {
                    printf("x");
                }
                else if (c[1][i] == -1 )
                {
                    printf("-x");
                }
                if (c[1][i] < -1)
                {
                    printf("%dx",c[1][i]);
                }
            }
            else if (c[0][i] == 0)
            {
                if (c[1][i] != 0)
                {
                    printf("%d",c[1][i]);
                }
            }
        }
    }

    return 0;
}