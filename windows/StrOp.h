#ifndef STROP_H_
#define STROP_H_
#include <tchar.h>

class CStrOp
{
public:
	//��TCHARתΪchar
	//*tchar��TCHAR����ָ�룬*_char��char����ָ��
	static void TcharToChar (const TCHAR * tchar, char * _char);
	//��charתΪTCHAR
	//*tchar��TCHAR����ָ�룬*_char��char����ָ��
	static void CharToTchar (const char * _char, TCHAR * tchar);
};
#endif //STROP_H_