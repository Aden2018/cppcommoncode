#ifndef STROP_H_
#define STROP_H_
#include <tchar.h>

class CStrOp
{
public:
	//��TCHARתΪchar
	//*tchar��TCHAR����ָ�룬*_char��char����ָ��
	static void TcharToChar (const wchar_t * tchar, char * _char);
	//��charתΪTCHAR
	//*tchar��TCHAR����ָ�룬*_char��char����ָ��
	static void CharToTchar (const char * _char, wchar_t * tchar);
};
#endif //STROP_H_