
// OPMapping.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// COPMappingApp:
// �аѾ\��@�����O�� OPMapping.cpp
//

class COPMappingApp : public CWinAppEx
{
public:
	COPMappingApp();

// �мg
	public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern COPMappingApp theApp;