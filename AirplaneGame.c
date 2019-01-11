#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define high 20
#define width 25
#define dfly_time 5
int quan[high][width]={0};
int fly_x,fly_y,turn,score;
int dfly_x[dfly_time],dfly_y[dfly_time];
int boss_xl,boss_cx,boss_x[10],boss_y[10],boss_yd,boss_tgyj;
int  boss_zd_x,boss_zd_y;
void HideCursor()  //清除闪动下标
{
	CONSOLE_CURSOR_INFO cursor_info = {1,0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);
}   
void gotoxy(int x, int y)  //跳转x,y坐标
{
    COORD pos = {x,y};
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut,pos);
}
void startup()
{ 
  int i,j;
  fly_x=high-2;  //飞机相对x轴的位置
  fly_y=width/2;//飞机相对y轴的位置
  int k=0;
  for(;k<dfly_time;k++)
  {
	  dfly_x[k] = rand()%2;
	  dfly_y[k] = rand()%(width-1);
	  quan[dfly_x[k]][dfly_x[k]] = 2;
  }
  quan[fly_x][fly_y]=1;  //我方飞机为1
  turn=0;  //检测是否退出游戏
  score=0;  //显示得分
  boss_xl=250;  //boss血量
  boss_cx=0;  //boss出现
  boss_yd=1;  //boss左右移动
  boss_tgyj=0;  //boss技能[同归于尽]
  //boss体型
  boss_x[0]=1;
  boss_y[0]=12;

  boss_x[1]=1;
  boss_y[1]=11;

  boss_x[2]=1;
  boss_y[2]=10;

  boss_x[3]=1;
  boss_y[3]=13;

  boss_x[4]=1;
  boss_y[4]=14;

  boss_x[5]=0;
  boss_y[5]=12;

  boss_x[6]=0;
  boss_y[6]=11;

  boss_x[7]=0;
  boss_y[7]=13;

  boss_x[8]=2;
  boss_y[8]=11;

  boss_x[9]=2;
  boss_y[9]=13;
  
  //boss子弹
  boss_zd_x = boss_x[0]+1;
  boss_zd_y = boss_y[0];
  //墙
  for(i=0;i<high;i++)
	  for(j=0;j<width;j++)
	  {
		  if(j==width-1)
			  quan[i][j]=4;
		  else if(i==high-1)
			  quan[i][j]=5;
	  }
}
void show()
{ 
	int i,j;
	gotoxy(0,0);
  for(i=0;i<high;i++)
  {  for(j=0;j<width;j++)
        if(quan[i][j]==0)  //o is kong ge
			printf(" ");
        else if(quan[i][j]==1)  //1 is fly 
			printf("*");
		else if(quan[i][j]==2)  //2 is dfly
			printf("@");
		else if(quan[i][j]==3)  //3 is zd
			printf("|");
		else if(quan[i][j]==4)  //4 is qiang
			printf("|");
		else if(quan[i][j]==5)  //5 is di ban
			printf("-");
		else if(quan[i][j]==6&&boss_cx==1)  //6 is boss
			printf("&");
  printf("\n");
  }
  printf("击败敌机: [ %d ] 架\n",score);
  if(boss_cx==1)
	  printf("boss血量: [ %d ] ",boss_xl);
}
void updatewithoutInput()
{   
    int i,j,b,k;
	for(i=0;i<high;i++)
		for(j=0;j<width;j++)
			if(quan[i][j]==3)
			{   //击中敌方飞机
				for(k=0;k<dfly_time;k++)
				{
				if(i==dfly_x[k]&&j==dfly_y[k])
				{
					quan[dfly_x[k]][dfly_y[k]]=0;
					score++;
					dfly_x[k]=0;
					dfly_y[k]=rand()%(width-1);
					quan[dfly_x[k]][dfly_y[k]]=2;
				}
				}
				//子弹击中boss
				for(b=0;b<10;b++)
				if(i==boss_x[i]+1&&j==boss_y[i])
				{
					boss_xl--;
				}
				//子弹击中我方飞机
				if(i==fly_x&&j==fly_y)
					turn=3;
				//子弹上升
				quan[i][j]=0;
				    if(i>0)
					quan[i-1][j]=3;
			}
    //我方飞机被击中
	for(k=0;k<dfly_time;k++)
	{
	if(dfly_x[k]==fly_x&&dfly_y[k]==fly_y)
		turn=3;
    //冲出屏幕
	if(dfly_x[k]>high)
	{
		quan[dfly_x[k]][dfly_y[k]]=0;
		dfly_x[k]=0;
		dfly_y[k]=rand()%(width-1);
		quan[dfly_x[k]][dfly_y[k]]=2;
	}
	}
    //敌方飞机下降
	static int n=0;
	if(n<10)
		n++;
	if(n==10)
	{
		for(k=0;k<dfly_time;k++)
		{
		quan[dfly_x[k]][dfly_y[k]]=0;
		dfly_x[k]++;
		quan[dfly_x[k]][dfly_y[k]]=2;
		n=0;
		}
		//boss左右移动
		if(boss_cx==1&&boss_tgyj==0)
		{
			for(i=0;i<10;i++)
			{
				quan[boss_x[i]][boss_y[i]] = 0;
				boss_y[i]+=boss_yd;
				quan[boss_x[i]][boss_y[i]] = 6;
			}
				if(boss_y[2]==0)
					boss_yd=-boss_yd;
				if(boss_y[4]==width-1)
				{
					boss_yd=-boss_yd;
				}
		}
		//boss移动[boss技能[同归于尽]]
		if(boss_cx==1)
		{
			if(boss_xl<50)
			{
				for(i=0;i<10;i++)
				{
		quan[boss_x[i]][boss_y[i]] = 0;
		boss_x[i]++;
				}
		boss_y[0]=fly_y;

		boss_y[1]=fly_y-1;
		boss_y[2]=fly_y-2;
		boss_y[3]=fly_y+1;
		boss_y[4]=fly_y+2;

		boss_y[5]=fly_y;

		boss_y[6]=fly_y-1;
		boss_y[7]=fly_y+1;
		boss_y[8]=fly_y-1;
		boss_y[9]=fly_y+1;
		for(i=0;i<10;i++)
		{
		quan[boss_x[i]][boss_y[i]] = 6;
		}
		boss_tgyj=1;
			}
		}
	}
	//boss摧毁我方飞机
	for(i=0;i<10;i++)
	{
	if(boss_x[i]==fly_x&&boss_y[i]==fly_y)
		turn=3;
	}
	//墙
	for(i=0;i<high;i++)
	  for(j=0;j<width;j++)
	  {
		  if(j==width-1)
			  quan[i][j]=4;
		  else if(i==high-1)
			  quan[i][j]=5;
	  }
	//boss出现
	if(score>5)
	{
	   boss_cx=1; 
    for(i=0;i<10;i++)
	{
	  quan[boss_x[i]][boss_y[i]] = 6;
	}

	}
	//游戏胜利
	if(boss_xl==0)
	   turn=2;
	//boss发射子弹
	if(boss_cx==1&&boss_tgyj==0)
	{
		        quan[boss_zd_x][boss_zd_y] = 0;
			    boss_zd_x++;
				boss_zd_y = boss_y[0];
			    quan[boss_zd_x][boss_zd_y] = 3;
				if(boss_zd_x==high)
					boss_zd_x=2;
	}
}
void updatewithInput()
{   char ch;
    if(kbhit())
	{
	ch=getch();
	//输入飞机上下左右
    if(ch=='w'&&fly_x!=0)
	{
		quan[fly_x][fly_y]=0;
		fly_x--;
		quan[fly_x][fly_y]=1;
	}
	else if(ch=='s'&&fly_x!=high-2)
	{   quan[fly_x][fly_y]=0;
		fly_x++;
		quan[fly_x][fly_y]=1;
	}
	else if(ch=='a'&&fly_y!=0)
	{	quan[fly_x][fly_y]=0;
		fly_y--;
		quan[fly_x][fly_y]=1;
	} 
	else if(ch=='d'&&fly_y!=width-2) 
	{	quan[fly_x][fly_y]=0;
		fly_y++;
		quan[fly_x][fly_y]=1;
	}
	else if(ch=='z')
		turn=1;
	if(ch=='j')
		quan[fly_x-1][fly_y]=3;
	}
}
void main()
{   int i,j;
	HideCursor();
	startup(); //初始化游戏数据
    while(1)  //开始游戏循环
{   show();  //显示游戏画面状态
    updatewithoutInput(); //玩家输入无关的更新
    updatewithInput();  //玩家输入有关的更新
    if(turn) break;  //退出游戏
}
	system("cls");
	for(i=0;i<10;i++)
			printf("\n");
		for(j=0;j<12;j++)
			printf(" ");
	if(turn==1)
	{
		printf("退出游戏成功-");
	    Sleep(1000);
	}
	else if(turn==2)
	{
	  printf("您一共击毁了 : [ %d ]  架敌方飞机\n\n\t\t      恭喜您胜利了-",score);
      Sleep(1000);
	}
	  else
	{
		printf("你失败了-");
	    Sleep(1000);
	}
}
