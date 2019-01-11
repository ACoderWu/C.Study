/*
    题目内容：
    你的程序要读入一行文本，其中以空格分隔为若干个单词，以‘.’结束。你要输出这行文本中每个单词的长度。这里的单词与语言无关，可以包括各种符号，比如“it's”算一个单词，长度为4。注意，行中可能出现连续的空格。
    输入格式:
    输入在一行中给出一行文本，以‘.’结束，结尾的句号不能计算在最后一个单词的长度内。
    输出格式：
    在一行中输出这行文本对应的单词的长度，每个长度之间以空格隔开，行末没有最后的空格。
*/

#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
    char s[1024] = "";
    gets(s1);

    int l = sizeof(s)/sizeof(s[0]);

    int n[100];
    for(int i = 0; i < 100; i++)
    {
        n[i] = 0;
    }

    int j = 0;
    for(int i = 0; i < l; i++)
    {
        if (s[i] == 32)
        {
            j++;
        }
        else if(s[i] == 46)
        {
            j++;
            n[j] = -1;
            break;
        }
        else
        {
        n[j]++;
        }
    }

    for(int i = 0; i < 100; i++)
    {
        if(n[0] == 0)
        {
            break;
        }
        if(n[i] == -1)
        {
            break;
        }
        printf("%d",n[i]);
        if(i < j-1)
        {
            printf(" ");
        }
    }

    return 0;
}