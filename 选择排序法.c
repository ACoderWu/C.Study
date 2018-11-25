#include <stdio.h>

int maxid(int a[], int len);

int main()
{
    int a[8] = {0};
    int len = sizeof(a)/sizeof(a[0]);

    for(int i = 0; i < len; i++)
    scanf("%d", &a[i]);

    for(int i = len-1; i > 0; i--)
    {
        int max = maxid(a, i+1);
        int j = a[i];
        a[i] = a[max];
        a[max] = j;
    }

    for(int i = 0; i < len; i++)
    printf("%d\t", a[i]);

    return 0;
}

int maxid (int a[], int len)
{
    int maxid = 0;

    for (int i = 0; i < len; i++)
    {
        if(a[i] > a[maxid])
        {
            maxid = i;
        }
    }

    return maxid;
}