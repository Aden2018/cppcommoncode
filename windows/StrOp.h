#ifndef STROP_H_
#define STROP_H_
#include <tchar.h>

class CStrOp
{
public:
	//将TCHAR转为char
	//*tchar是TCHAR类型指针，*_char是char类型指针
	static void TcharToChar (const TCHAR * tchar, char * _char);
	//将char转为TCHAR
	//*tchar是TCHAR类型指针，*_char是char类型指针
	static void CharToTchar (const char * _char, TCHAR * tchar);
};
#endif //STROP_H_