#ifndef STROP_H_
#define STROP_H_
#include <tchar.h>

class CStrOp
{
public:
	//将TCHAR转为char
	//*tchar是TCHAR类型指针，*_char是char类型指针
	static void TcharToChar (const wchar_t * tchar, char * _char);
	//将char转为TCHAR
	//*tchar是TCHAR类型指针，*_char是char类型指针
	static void CharToTchar (const char * _char, wchar_t * tchar);
};
#endif //STROP_H_