
// ImageCompare.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CImageCompareApp: 
// �йش����ʵ�֣������ ImageCompare.cpp
//

class CImageCompareApp : public CWinApp
{
public:
	CImageCompareApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CImageCompareApp theApp;