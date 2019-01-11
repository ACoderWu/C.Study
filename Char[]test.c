#include <stdio.h>

int main()
{
    char *s1 = "Hello Work!";
    char *s2 = "Hello Work!";
    char *s3 = "世界你好！";
    char s4[] = "Hello Work!";

    printf("s1  = %p\n",s1);
    printf("s2  = %p\n",s2);
    printf("s3  = %p\n",s3);
    printf("*s4 = %p\n",&s4);

    return 0;
}