//----------------------------------------------------------------------------
// �������ƣ�   ConfigFile.h
// ����˵����   �� ConfigFile �Ķ���
// �������ߣ�   
// ����汾��   1.0
// ��ʼ���ڣ�   1999-01-10
//----------------------------------------------------------------------------

#ifndef __CONFIGFILE_H__
#define __CONFIGFILE_H__

#include <fstream>
#include <iostream>

using namespace std;

#define MAX_LINE_LENGTH 300

//----------------------------------------------------------------------------
// ��˵�������ڶ������ļ����в��������ڸ����Ľ����ͱ���������ñ�����ֵ��
//----------------------------------------------------------------------------
class CConfigFile
{
public:
	CConfigFile();
	CConfigFile(char *pConfigFileName);
	~CConfigFile();

private:
	fstream m_CfgFile;
	short m_IsOpen;  //�ļ���״̬
	enum
	{
		IS_COMMENT ,    //��ע��
		IS_SESSION ,    //�ǽ���
		IS_VALUE,       //�Ǳ�����ֵ
		NOT_FOUND       //û���ҵ�ָ���ı�����
	};

private:
	//����һ��ָ���Ľ���
	short  GetSession(char *pStr,char *SessionName);

	//��ñ�����ֵ
	short GetContent(char *pStr,char *ValueName,char *RetStr);

protected:
	//�����ļ���״̬
	short  IsOpen() { return m_IsOpen; };

	//��һ��ָ���������ļ�
	short  Open(char *ConfigFileName);

	//�ر������ļ�
	void   Close();

public:

	//���ݸ����Ľ����ͱ����������ļ��ж���������ֵ
	short  GetValue(char *Session,char *ValueName,char *RetStr);
};

#endif //__CONFIGFILE_H__