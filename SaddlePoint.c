#include <stdio.h>

int main()
{
    int number = 0;
    int max = 0;
    int min = 0;
    scanf("%d",&number);
    int a[number][number];
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int l = 0;
    for (int i = 0; i < number; i++)
    {
        int k = 0;
        max = a[i][0];
        for (int j = 0; j < number; j++)    //定位行上最大数所在列
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                k = j;
            }
        }
        min = a[0][k];
        for (int h = 0; h < number; h++)    //定位所在列上最大数所在行
        {
            if (a[h][k] < min)
            {
                min = a[h][k];
            }
        }
        if (max == min && a[0][k] != a[0][k+1] )    //判断两数是否相等（是否同一位置）排除数等矩阵
        {
            printf("%d %d\n",i,k);
            l++;
        }
    }
    
    if (l == 0 )
    {
        printf("NO");
    }

    return 0;
}