
// RKDBMS1.h : RKDBMS1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CRKDBMS1App:
// �йش����ʵ�֣������ RKDBMS1.cpp
//

class CRKDBMS1App : public CWinApp
{
public:
	CRKDBMS1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CRKDBMS1App theApp;
