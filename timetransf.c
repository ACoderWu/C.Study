#include <stdio.h>

/*
输入一个北京时间BJT，个十位表示分，百千位表示时，即输入限于0~2359
转换为世界协调时间UTC，UTC比BJT慢8个小时
*/
int main()
{
    int time = 0;
    scanf("%d",&time);
    if(time >= 800)
    {
        time -= 800;
    }
    else
    {
        time += 1600;
    }
    printf("%d",time);

    return 0;
}