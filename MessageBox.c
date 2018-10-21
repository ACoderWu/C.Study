#include <stdio.h>
#include <windows.h>

int main()
{
	int ret=MessageBox(NULL,TEXT("你是好人吗？"),TEXT("CHOOSE"),MB_YESNO|MB_ICONQUESTION);
	if(ret==IDYES)
	{
	int ret2=MessageBox(NULL,TEXT("你看你就不像一个好人!"),TEXT("要说实话哟!"),MB_OK|MB_ICONWARNING);
	if(ret2==IDOK)
	MessageBox(NULL,TEXT("开始格式化C盘!哈哈"),TEXT("骗人了吧!"),MB_OK);
	}
	else
	{
	L1:int ret3=MessageBox(NULL,TEXT("尝试把你变成好人失败，是否重试呢？"),TEXT("要做好人吗？"),MB_OK|MB_RETRYCANCEL);
	if(ret3==IDRETRY) goto L1;
	else MessageBox(NULL,TEXT("坏蛋可以去死啦!"),TEXT("哎真让人替你悲哀呀"),MB_OK);
	}
}
