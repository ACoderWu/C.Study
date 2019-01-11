#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//  $GPRMC,024813.640,A,3158.4608,N,11848.3737,E,10.05,324.27,150706,000,E,A*50
char GPRMC(*s); //获取GPRMC字段
bool verify(*s); //校验GPS数据的有效性
int sum_of_verify_value(*s);    //计算与验证校验和
int clock(*s);  //换算北京小时时间

int main(){
    char GPSData[76] = "";    //定义输入字符串数组
    char datatemp[76] = "";   //定义暂时读取到的数组
    char data[76] = "";   //Define the final array of right


    return 0;
}

char GPRMS(*s){ 
    int 

    return ;
}

bool verify(*s){
    bool vbool = 1;
    int _bool[]


    return vbool;
}

int sum_of_verify_value(*s){
    int value = 0;
    int s1 = int(*s);
    int s2 = int(*(s+1));
    value = s1^s2;
    int sum = 0;

    for(int i = 2; i < 76; i++){
        s += i;
        if( *s == "*" ){    //如果当前字符为*时跳出循环
            break;
        }
        int s3 = int(*s); 
        value = value^(*s); //连续异或
    }
    sum = value%65536;

    return sum;
}

int clock(*s){ 
    char c[2] ="";  //只需要换算小时
    c[0] = *s;
    c[1] = *(s+1);
    int c1 = int(c[0]-"0");
    int c2 = int(c[1]-"0");
    int cc = c1*10+c2+8;    //换算成北京时间小时
    if(cc > 23){ 
        cc -=24;
    }

    return cc;  //返回整数形式的北京时间小时
}







