#include <stdio.h>
#include <windows.h>

int main()
{
	int ret=MessageBox(NULL,TEXT("���Ǻ�����"),TEXT("CHOOSE"),MB_YESNO|MB_ICONQUESTION);
	if(ret==IDYES)
	{
	int ret2=MessageBox(NULL,TEXT("�㿴��Ͳ���һ������!"),TEXT("Ҫ˵ʵ��Ӵ!"),MB_OK|MB_ICONWARNING);
	if(ret2==IDOK)
	MessageBox(NULL,TEXT("��ʼ��ʽ��C��!����"),TEXT("ƭ���˰�!"),MB_OK);
	}
	else
	{
	L1:int ret3=MessageBox(NULL,TEXT("���԰����ɺ���ʧ�ܣ��Ƿ������أ�"),TEXT("Ҫ��������"),MB_OK|MB_RETRYCANCEL);
	if(ret3==IDRETRY) goto L1;
	else MessageBox(NULL,TEXT("��������ȥ����!"),TEXT("�����������㱯��ѽ"),MB_OK);
	}
}
