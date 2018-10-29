#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/*
这是一个猜数小游戏，先构建了一个素数表，输入一个数，会将这个数以内的素数或最初的
100个素数放进一个数组里，然后生成一个随机数，输入一个素数猜，取出随机数对应位置
的素数作对比，猜中了当然会有奖励，没猜中会告诉你正确的答案，不管猜的结果如何，最
终都会将这个素数的位置告诉你。
*/


int search(int key, int a[], int length);
int isPrime(int x);

int main()
{
    int prime[100] = {0};
    int number = 0;

    printf("please input a big number round\n");
    scanf( "%d", &number );

    int x = 0;
	int i = 0;
	int j = 0;
    int loc = -1;

	for (i = 0; i<(number+1) && j<100; i++)
	{
		if ( isPrime(i) )
		{
			prime[j++] = i;
			printf("%d\t", i);
			if ( (j)%10 == 0 )
            {
                printf("\n");
			}
		}
	}

    printf("\nplease input a number\n");
    scanf("%d", &x);

    int q;
    int w = q%100;

    if (prime[w] == x)
        {
            printf("yes, the number your guess is right!\n");
                    }
        else
        {
            printf("no, it's wrong your  guess!\nthe NO.%d true number is %d\n",w,prime[w]);
        }

    loc = search(x, prime, sizeof(prime)/sizeof(prime[0]));

    if(loc != -1 )
    {
        printf("%d in the NO.%d of the prime chart\n",x,loc+1);
    }
    else
    {
        printf("%d is not in prime\n",x);
    }

    return 0;
}


int isPrime(int x)
{
	int ret = 1;
	int i = 0;
	if ( x == 1 || (x%2 == 0 && x != 2))
	{
		ret = 0;
	}
	for ( i = 3; i < (x/2)/*sqrt(x)*/; i += 2 )
	{
		if( x%i == 0 )
		{
			ret = 0;
			break;
		}
	}

	return ret;

}

int search(int key, int a[], int length)
{
    int ret = -1;
    int i = 0;
    for( i = 0; i < length; i++ )
    {
        if( key == a[i] )
        {
            ret = i;
            break;
        }
    }

    return ret;
}
