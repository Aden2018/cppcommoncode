#include "StrOp.h"
#include <Windows.h>

void CStrOp::TcharToChar (const TCHAR * tchar, char * _char)
{
	//��ȡ�ֽڳ���
	int iLength = WideCharToMultiByte(CP_ACP, 0, tchar, -1, NULL, 0, NULL, NULL);
	//��tcharֵ����_char
	WideCharToMultiByte(CP_ACP, 0, tchar, -1, _char, iLength, NULL, NULL); 
}

void CStrOp::CharToTchar (const char * _char, TCHAR * tchar)
{
	int iLength = MultiByteToWideChar (CP_ACP, 0, _char, strlen (_char) + 1, NULL, 0);
	MultiByteToWideChar (CP_ACP, 0, _char, strlen(_char) + 1, tchar, iLength);
}