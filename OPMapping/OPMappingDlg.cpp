
// OPMappingDlg.cpp : 實作檔
//

#include "stdafx.h"
#include "OPMapping.h"
#include "OPMappingDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 對 App About 使用 CAboutDlg 對話方塊

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// 對話方塊資料
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

// 程式碼實作
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// COPMappingDlg 對話方塊




COPMappingDlg::COPMappingDlg(CWnd* pParent /*=NULL*/)
	: CDialog(COPMappingDlg::IDD, pParent)
	, m_AddrMode(0)
	, m_bDecodeOPMap(FALSE)
	, m_bExpandEA(FALSE)
	, m_eOPTab(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void COPMappingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_strAsmList);
	DDX_Control(pDX, IDC_LOCATION, m_OPInput);
	DDX_Radio(pDX, IDC_RADIO_AD16, m_AddrMode);
	DDX_Check(pDX, IDC_CHK_DECODE_OPMAP, m_bDecodeOPMap);
	DDX_Check(pDX, IDC_CHK_EXPAND_EA, m_bExpandEA);
	DDX_Radio(pDX, IDC_RADIO_1B, m_eOPTab);
	DDV_MinMaxInt(pDX, m_eOPTab, 0, 1);
}

BEGIN_MESSAGE_MAP(COPMappingDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON2, &COPMappingDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &COPMappingDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// COPMappingDlg 訊息處理常式

BOOL COPMappingDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 將 [關於...] 功能表加入系統功能表。

	// IDM_ABOUTBOX 必須在系統命令範圍之中。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 設定此對話方塊的圖示。當應用程式的主視窗不是對話方塊時，
	// 框架會自動從事此作業
	SetIcon(m_hIcon, TRUE);			// 設定大圖示
	SetIcon(m_hIcon, FALSE);		// 設定小圖示

	// TODO: 在此加入額外的初始設定

	m_AddrMode = 0;
	m_bDecodeOPMap=TRUE;
	m_bExpandEA=TRUE;

	return TRUE;  // 傳回 TRUE，除非您對控制項設定焦點
}

void COPMappingDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// 如果將最小化按鈕加入您的對話方塊，您需要下列的程式碼，
// 以便繪製圖示。對於使用文件/檢視模式的 MFC 應用程式，
// 框架會自動完成此作業。

void COPMappingDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 繪製的裝置內容

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 將圖示置中於用戶端矩形
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 描繪圖示
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}



// 當使用者拖曳最小化視窗時，
// 系統呼叫這個功能取得游標顯示。
HCURSOR COPMappingDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

#include "libOP.h"
#define OP_ENTRY_MAX 4096
#define SHOW_VALID

OPENTRY OpEntry[OP_ENTRY_MAX];


void COPMappingDlg::OnBnClickedButton2()
{
	// TODO: 在此加入控制項告知處理常式程式碼
    DWORD lOpMatch,lOption = 0;

	CString strOP;
	int i;
	WCHAR prefixes[8];

	m_OPInput.GetWindowText(strOP);

	strOP.MakeLower();
	i = 0;
	while( i < strOP.GetLength())
	{
		if(strOP[i]!=_T('0')&&strOP[i]!=_T('1')&&strOP[i]!=_T('x'))
		{
			MessageBox(_T("Only 1,0,x allowed"),_T("ERROR"));
			return;
		}
		i++;
	}

	i=strOP.GetLength();
	while(i < 16)
	{
		strOP.Append(_T("x"));
		i++;
	}
	m_OPInput.SetWindowText(strOP);

	if(!strOP.IsEmpty())
	{
		CString strTemp;
		UpdateData();

		if(m_bDecodeOPMap)
			lOption|=OPTION_DECODE_OPMAP;
		if(m_bExpandEA)
			lOption|=OPTION_EXPAND_MODRM_EA;

	    
		lOpMatch = xEnumOPCode((E_XB_OP)m_eOPTab, (E_ADM)m_AddrMode, strOP.GetBuffer(), &OpEntry[0], OP_ENTRY_MAX, lOption);
		

		strTemp.Format(_T("%i item in listbox"),lOpMatch);
		SetDlgItemText(IDC_STATUS,strTemp);
		m_strAsmList.ResetContent();
		for(DWORD i = 0 ; i < lOpMatch ; i++)
		{
			if (OpEntry[i].ReqPrefix & PF_Operand)
			{
				memcpy(prefixes, L"opdsize", sizeof(L"opdsize"));
			}
			else if (OpEntry[i].ReqPrefix & PF_REPNE)
			{
				memcpy(prefixes, L"REPNE", sizeof(L"REPNE"));
			}
			else if (OpEntry[i].ReqPrefix & PF_REP)
			{
				memcpy(prefixes, L"REP", sizeof(L"REP"));
			}
			else if (OpEntry[i].ReqPrefix & PF_FWAIT)
			{
				memcpy(prefixes, L"FWAIT", sizeof(L"FWAIT"));
			}

			// debug mode
			#ifdef SHOW_VALID
			if (OpEntry[i].ReqPrefix & 0x01)
			{
			#endif /* SHOW_VALID */
				// group, prefixes
				if ((OpEntry[i].OPExt & 0x80) && (OpEntry[i].ReqPrefix & 0xFE))
				{
					if ((OpEntry[i].OPExt & 0x20) && (OpEntry[i].OPExt & 0x08))
						strTemp.Format(_T("%02X/%x [11B] %s (%s)"), OpEntry[i].OP, OpEntry[i].OPExt & 0x07, OpEntry[i].strDisasm, prefixes);
					else if (OpEntry[i].OPExt & 0x20)
						strTemp.Format(_T("%02X/%x [mem] %s (%s)"), OpEntry[i].OP, OpEntry[i].OPExt & 0x07, OpEntry[i].strDisasm, prefixes);
					else
						strTemp.Format(_T("%02X/%x       %s (%s)"), OpEntry[i].OP, OpEntry[i].OPExt & 0x07, OpEntry[i].strDisasm, prefixes);
				}
				// prefixes
				else if (OpEntry[i].ReqPrefix & 0xFE)
				{
					if ((OpEntry[i].OPExt & 0x20) && (OpEntry[i].OPExt & 0x08))
						strTemp.Format(_T("%02X   [11B] %s (%s)"), OpEntry[i].OP, OpEntry[i].strDisasm, prefixes);
					else if (OpEntry[i].OPExt & 0x20)
						strTemp.Format(_T("%02X   [mem] %s (%s)"), OpEntry[i].OP, OpEntry[i].strDisasm, prefixes);
					else
						strTemp.Format(_T("%02X         %s (%s)"), OpEntry[i].OP, OpEntry[i].strDisasm, prefixes);
				}
				// group
				else if (OpEntry[i].OPExt & 0x80)
				{
					if ((OpEntry[i].OPExt & 0x20) && (OpEntry[i].OPExt & 0x08))
						strTemp.Format(_T("%02X/%x [11B] %s"), OpEntry[i].OP, OpEntry[i].OPExt & 0x07, OpEntry[i].strDisasm);
					else if (OpEntry[i].OPExt & 0x20)
						strTemp.Format(_T("%02X/%x [mem] %s"), OpEntry[i].OP, OpEntry[i].OPExt & 0x07, OpEntry[i].strDisasm);
					else
						strTemp.Format(_T("%02X/%x       %s"), OpEntry[i].OP, OpEntry[i].OPExt & 0x07, OpEntry[i].strDisasm);
				}
				// default
				else
				{
					if ((OpEntry[i].OPExt & 0x20) && (OpEntry[i].OPExt & 0x08))
						strTemp.Format(_T("%02X   [11B] %s"), OpEntry[i].OP, OpEntry[i].strDisasm);
					else if (OpEntry[i].OPExt & 0x20)
						strTemp.Format(_T("%02X   [mem] %s"), OpEntry[i].OP, OpEntry[i].strDisasm);
					else
						strTemp.Format(_T("%02X         %s"), OpEntry[i].OP, OpEntry[i].strDisasm);
				}
				m_strAsmList.AddString(strTemp);
			#ifdef SHOW_VALID
			}
			#endif /* SHOW_VALID */
		}
	}
}


void COPMappingDlg::OnBnClickedButton1()
{
	unsigned int lOpMatch;
	//unsigned int lOption;
	wchar_t opdsize[8];
	wchar_t REPNE[6];
	wchar_t REP[4];
	wchar_t FWAIT[7];

	// pointer to the string
	wchar_t* prefixes;

	// declare file stream
	FILE *File_Handler_00;
	FILE* File_Handler_01;
	FILE* File_Handler_02;
	FILE* File_Handler_03;
	FILE* File_Handler_04;
	FILE* File_Handler_05;
	FILE* File_Handler_06;
	FILE* File_Handler_07;
	FILE* File_Handler_08;
	FILE* File_Handler_09;
	FILE* File_Handler_10;
	FILE* File_Handler_11;
	FILE* File_Handler_12;

	// pointer to the file handler
	FILE* File_Handler;

	// Open file stream for write only
	fopen_s(&File_Handler_00, "log_00.txt","w");
	fopen_s(&File_Handler_01, "log_01.txt", "w");
	fopen_s(&File_Handler_02, "log_02.txt", "w");
	fopen_s(&File_Handler_03, "log_03.txt", "w");
	fopen_s(&File_Handler_04, "log_04.txt", "w");
	fopen_s(&File_Handler_05, "log_05.txt", "w");
	fopen_s(&File_Handler_06, "log_06.txt", "w");
	fopen_s(&File_Handler_07, "log_07.txt", "w");
	fopen_s(&File_Handler_08, "log_08.txt", "w");
	fopen_s(&File_Handler_09, "log_09.txt", "w");
	fopen_s(&File_Handler_10, "log_10.txt", "w");
	fopen_s(&File_Handler_11, "log_11.txt", "w");
	fopen_s(&File_Handler_12, "log_12.txt", "w");

	// Close stream if it is not NULL
	if (
		(File_Handler_00 && File_Handler_01 && File_Handler_02 && File_Handler_03 && 
			File_Handler_04 && File_Handler_05 && File_Handler_06 && File_Handler_07 && 
			File_Handler_08 && File_Handler_09 && File_Handler_10 && File_Handler_11 &&
			File_Handler_12) == NULL
		)
	{
		return;
	}

	// go on if Destination file is ready

	// allocate large memory pool for temp data
	OPENTRY*  ptr_OpEntry = (OPENTRY*) malloc(15887 * sizeof(OPENTRY));
	memcpy(opdsize, L"opdsize", sizeof(L"opdsize"));
	memcpy(REPNE, L"REPNE", sizeof(L"REPNE"));
	memcpy(REP, L"REP", sizeof(L"REP"));
	memcpy(FWAIT, L"FWAIT", sizeof(L"FWAIT"));

	// ouch, that's 15887 * 264 = 3.999 M-Byte memory
	if (ptr_OpEntry == NULL)
	{
		return;
	}

	// default setting

	//if (m_bDecodeOPMap)
	//{
	//	lOption = OPTION_DECODE_OPMAP;
	//}
	//else if (m_bExpandEA)
	//{
	//	lOption = OPTION_EXPAND_MODRM_EA;
	//}
	//else
	//{
	//	lOption = 0;
	//}

	// Phase 01. 1-byte opcode ------ / 16-bit address -- / DECODE_OPMAP

	// point to valid file
	File_Handler = File_Handler_00;
	// do the actual query
	lOpMatch = xEnumOPCode((E_XB_OP)E_1B_OP, (E_ADM)E_AD16,
		L"xxxxxxxxxxxxxxxx", ptr_OpEntry, 15887, (DWORD)OPTION_DECODE_OPMAP);
	
	// do the actual write
	for (unsigned int i = 0; i < lOpMatch; i++)
	{
		if (ptr_OpEntry[i].ReqPrefix & PF_Operand)
		{
			prefixes = opdsize;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REPNE)
		{
			prefixes = REPNE;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REP)
		{
			prefixes = REP;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_FWAIT)
		{
			prefixes = FWAIT;
		}
		if (ptr_OpEntry[i].ReqPrefix & 0x01)
		{
			// group, prefixes
			if ((ptr_OpEntry[i].OPExt & 0x80) && (ptr_OpEntry[i].ReqPrefix & 0xFE))
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X/%x       %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// prefixes
			else if (ptr_OpEntry[i].ReqPrefix & 0xFE)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X         %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// group
			else if (ptr_OpEntry[i].OPExt & 0x80)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X/%x       %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
			}
			// default
			else
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X         %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
			}
		}
	}

	// release file stream
	fclose(File_Handler);

	// Phase 02. 2-byte opcode 0F---- / 16-bit address -- / DECODE_OPMAP

	// point to valid file
	File_Handler = File_Handler_01;
	// do the actual query
	lOpMatch = xEnumOPCode((E_XB_OP)E_2B_OP, (E_ADM)E_AD16,
		L"xxxxxxxxxxxxxxxx", ptr_OpEntry, 15887, (DWORD)OPTION_DECODE_OPMAP);

	// do the actual write
	for (unsigned int i = 0; i < lOpMatch; i++)
	{
		if (ptr_OpEntry[i].ReqPrefix & PF_Operand)
		{
			prefixes = opdsize;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REPNE)
		{
			prefixes = REPNE;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REP)
		{
			prefixes = REP;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_FWAIT)
		{
			prefixes = FWAIT;
		}
		if (ptr_OpEntry[i].ReqPrefix & 0x01)
		{
			// group, prefixes
			if ((ptr_OpEntry[i].OPExt & 0x80) && (ptr_OpEntry[i].ReqPrefix & 0xFE))
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X/%x       %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// prefixes
			else if (ptr_OpEntry[i].ReqPrefix & 0xFE)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X         %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// group
			else if (ptr_OpEntry[i].OPExt & 0x80)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X/%x       %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
			}
			// default
			else
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X         %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
			}
		}
	}

	// release file stream
	fclose(File_Handler);

	// Phase 03. 3-byte opcode 0F38-- / 16-bit address -- / DECODE_OPMAP

	// point to valid file
	File_Handler = File_Handler_02;
	// do the actual query
	lOpMatch = xEnumOPCode((E_XB_OP)E_3B_OP_0F38, (E_ADM)E_AD16,
		L"xxxxxxxxxxxxxxxx", ptr_OpEntry, 15887, (DWORD)OPTION_DECODE_OPMAP);

	// do the actual write
	for (unsigned int i = 0; i < lOpMatch; i++)
	{
		if (ptr_OpEntry[i].ReqPrefix & PF_Operand)
		{
			prefixes = opdsize;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REPNE)
		{
			prefixes = REPNE;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REP)
		{
			prefixes = REP;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_FWAIT)
		{
			prefixes = FWAIT;
		}
		if (ptr_OpEntry[i].ReqPrefix & 0x01)
		{
			// group, prefixes
			if ((ptr_OpEntry[i].OPExt & 0x80) && (ptr_OpEntry[i].ReqPrefix & 0xFE))
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X/%x       %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// prefixes
			else if (ptr_OpEntry[i].ReqPrefix & 0xFE)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X         %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// group
			else if (ptr_OpEntry[i].OPExt & 0x80)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X/%x       %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
			}
			// default
			else
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X         %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
			}
		}
	}

	// release file stream
	fclose(File_Handler);


	// Phase 04. 3-byte opcode 0F3A-- / 16-bit address -- / DECODE_OPMAP

	// point to valid file
	File_Handler = File_Handler_03;
	// do the actual query
	lOpMatch = xEnumOPCode((E_XB_OP)E_3B_OP_0F3A, (E_ADM)E_AD16,
		L"xxxxxxxxxxxxxxxx", ptr_OpEntry, 15887, (DWORD)OPTION_DECODE_OPMAP);

	// do the actual write
	for (unsigned int i = 0; i < lOpMatch; i++)
	{
		if (ptr_OpEntry[i].ReqPrefix & PF_Operand)
		{
			prefixes = opdsize;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REPNE)
		{
			prefixes = REPNE;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REP)
		{
			prefixes = REP;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_FWAIT)
		{
			prefixes = FWAIT;
		}
		if (ptr_OpEntry[i].ReqPrefix & 0x01)
		{
			// group, prefixes
			if ((ptr_OpEntry[i].OPExt & 0x80) && (ptr_OpEntry[i].ReqPrefix & 0xFE))
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X/%x       %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// prefixes
			else if (ptr_OpEntry[i].ReqPrefix & 0xFE)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X         %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// group
			else if (ptr_OpEntry[i].OPExt & 0x80)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X/%x       %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
			}
			// default
			else
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X         %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
			}
		}
	}

	// release file stream
	fclose(File_Handler);

	// Phase 05. 1-byte opcode ------ / 16-bit address -- / EXPAND_MODRM

	// point to valid file
	File_Handler = File_Handler_04;
	// do the actual query
	lOpMatch = xEnumOPCode((E_XB_OP)E_1B_OP, (E_ADM)E_AD16,
		L"xxxxxxxxxxxxxxxx", ptr_OpEntry, 15887, (DWORD)OPTION_EXPAND_MODRM_EA);

	// do the actual write
	for (unsigned int i = 0; i < lOpMatch; i++)
	{
		if (ptr_OpEntry[i].ReqPrefix & PF_Operand)
		{
			prefixes = opdsize;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REPNE)
		{
			prefixes = REPNE;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REP)
		{
			prefixes = REP;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_FWAIT)
		{
			prefixes = FWAIT;
		}
		if (ptr_OpEntry[i].ReqPrefix & 0x01)
		{
			// group, prefixes
			if ((ptr_OpEntry[i].OPExt & 0x80) && (ptr_OpEntry[i].ReqPrefix & 0xFE))
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X/%x       %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// prefixes
			else if (ptr_OpEntry[i].ReqPrefix & 0xFE)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X         %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// group
			else if (ptr_OpEntry[i].OPExt & 0x80)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X/%x       %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
			}
			// default
			else
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X         %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
			}
		}
	}

	// release file stream
	fclose(File_Handler);

	// Phase 06. 2-byte opcode 0F---- / 16-bit address -- / EXPAND_MODRM

	// point to valid file
	File_Handler = File_Handler_05;
	// do the actual query
	lOpMatch = xEnumOPCode((E_XB_OP)E_2B_OP, (E_ADM)E_AD16,
		L"xxxxxxxxxxxxxxxx", ptr_OpEntry, 15887, (DWORD)OPTION_EXPAND_MODRM_EA);

	// do the actual write
	for (unsigned int i = 0; i < lOpMatch; i++)
	{
		if (ptr_OpEntry[i].ReqPrefix & PF_Operand)
		{
			prefixes = opdsize;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REPNE)
		{
			prefixes = REPNE;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REP)
		{
			prefixes = REP;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_FWAIT)
		{
			prefixes = FWAIT;
		}
		if (ptr_OpEntry[i].ReqPrefix & 0x01)
		{
			// group, prefixes
			if ((ptr_OpEntry[i].OPExt & 0x80) && (ptr_OpEntry[i].ReqPrefix & 0xFE))
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X/%x       %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// prefixes
			else if (ptr_OpEntry[i].ReqPrefix & 0xFE)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X         %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// group
			else if (ptr_OpEntry[i].OPExt & 0x80)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X/%x       %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
			}
			// default
			else
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X         %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
			}
		}
	}

	// release file stream
	fclose(File_Handler);

	// Phase 07. 3-byte opcode 0FE8-- / 16-bit address -- / EXPAND_MODRM

	// point to valid file
	File_Handler = File_Handler_06;
	// do the actual query
	lOpMatch = xEnumOPCode((E_XB_OP)E_3B_OP_0F38, (E_ADM)E_AD16,
		L"xxxxxxxxxxxxxxxx", ptr_OpEntry, 15887, (DWORD)OPTION_EXPAND_MODRM_EA);

	// do the actual write
	for (unsigned int i = 0; i < lOpMatch; i++)
	{
		if (ptr_OpEntry[i].ReqPrefix & PF_Operand)
		{
			prefixes = opdsize;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REPNE)
		{
			prefixes = REPNE;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REP)
		{
			prefixes = REP;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_FWAIT)
		{
			prefixes = FWAIT;
		}
		if (ptr_OpEntry[i].ReqPrefix & 0x01)
		{
			// group, prefixes
			if ((ptr_OpEntry[i].OPExt & 0x80) && (ptr_OpEntry[i].ReqPrefix & 0xFE))
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X/%x       %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// prefixes
			else if (ptr_OpEntry[i].ReqPrefix & 0xFE)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X         %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// group
			else if (ptr_OpEntry[i].OPExt & 0x80)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X/%x       %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
			}
			// default
			else
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X         %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
			}
		}
	}

	// release file stream
	fclose(File_Handler);

	// Phase 08. 3-byte opcode 0FEA-- / 16-bit address -- / EXPAND_MODRM

	// point to valid file
	File_Handler = File_Handler_07;
	// do the actual query
	lOpMatch = xEnumOPCode((E_XB_OP)E_3B_OP_0F3A, (E_ADM)E_AD16,
		L"xxxxxxxxxxxxxxxx", ptr_OpEntry, 15887, (DWORD)OPTION_EXPAND_MODRM_EA);

	// do the actual write
	for (unsigned int i = 0; i < lOpMatch; i++)
	{
		if (ptr_OpEntry[i].ReqPrefix & PF_Operand)
		{
			prefixes = opdsize;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REPNE)
		{
			prefixes = REPNE;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REP)
		{
			prefixes = REP;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_FWAIT)
		{
			prefixes = FWAIT;
		}
		if (ptr_OpEntry[i].ReqPrefix & 0x01)
		{
			// group, prefixes
			if ((ptr_OpEntry[i].OPExt & 0x80) && (ptr_OpEntry[i].ReqPrefix & 0xFE))
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X/%x       %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// prefixes
			else if (ptr_OpEntry[i].ReqPrefix & 0xFE)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X         %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// group
			else if (ptr_OpEntry[i].OPExt & 0x80)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X/%x       %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
			}
			// default
			else
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X         %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
			}
		}
	}

	// release file stream
	fclose(File_Handler);

	// Phase 09. 1-byte opcode ------ / 32-bit address -- / EXPAND_MODRM

	// point to valid file
	File_Handler = File_Handler_08;
	// do the actual query
	lOpMatch = xEnumOPCode((E_XB_OP)E_1B_OP, (E_ADM)E_AD32,
		L"xxxxxxxxxxxxxxxx", ptr_OpEntry, 15887, (DWORD)OPTION_EXPAND_MODRM_EA);

	// do the actual write
	for (unsigned int i = 0; i < lOpMatch; i++)
	{
		if (ptr_OpEntry[i].ReqPrefix & PF_Operand)
		{
			prefixes = opdsize;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REPNE)
		{
			prefixes = REPNE;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REP)
		{
			prefixes = REP;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_FWAIT)
		{
			prefixes = FWAIT;
		}
		if (ptr_OpEntry[i].ReqPrefix & 0x01)
		{
			// group, prefixes
			if ((ptr_OpEntry[i].OPExt & 0x80) && (ptr_OpEntry[i].ReqPrefix & 0xFE))
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X/%x       %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// prefixes
			else if (ptr_OpEntry[i].ReqPrefix & 0xFE)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X         %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// group
			else if (ptr_OpEntry[i].OPExt & 0x80)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X/%x       %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
			}
			// default
			else
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X         %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
			}
		}
	}

	// release file stream
	fclose(File_Handler);

	// Phase 10. 2-byte opcode 0F---- / 32-bit address -- / EXPAND_MODRM

	// point to valid file
	File_Handler = File_Handler_09;
	// do the actual query
	lOpMatch = xEnumOPCode((E_XB_OP)E_2B_OP, (E_ADM)E_AD32,
		L"xxxxxxxxxxxxxxxx", ptr_OpEntry, 15887, (DWORD)OPTION_EXPAND_MODRM_EA);

	// do the actual write
	for (unsigned int i = 0; i < lOpMatch; i++)
	{
		if (ptr_OpEntry[i].ReqPrefix & PF_Operand)
		{
			prefixes = opdsize;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REPNE)
		{
			prefixes = REPNE;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REP)
		{
			prefixes = REP;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_FWAIT)
		{
			prefixes = FWAIT;
		}
		if (ptr_OpEntry[i].ReqPrefix & 0x01)
		{
			// group, prefixes
			if ((ptr_OpEntry[i].OPExt & 0x80) && (ptr_OpEntry[i].ReqPrefix & 0xFE))
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X/%x       %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// prefixes
			else if (ptr_OpEntry[i].ReqPrefix & 0xFE)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X         %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// group
			else if (ptr_OpEntry[i].OPExt & 0x80)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X/%x       %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
			}
			// default
			else
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X         %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
			}
		}
	}

	// release file stream
	fclose(File_Handler);


	// Phase 11. 3-byte opcode 0F38-- / 32-bit address -- / EXPAND_MODRM

	// point to valid file
	File_Handler = File_Handler_10;
	// do the actual query
	lOpMatch = xEnumOPCode((E_XB_OP)E_3B_OP_0F38, (E_ADM)E_AD32,
		L"xxxxxxxxxxxxxxxx", ptr_OpEntry, 15887, (DWORD)OPTION_EXPAND_MODRM_EA);

	// do the actual write
	for (unsigned int i = 0; i < lOpMatch; i++)
	{
		if (ptr_OpEntry[i].ReqPrefix & PF_Operand)
		{
			prefixes = opdsize;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REPNE)
		{
			prefixes = REPNE;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REP)
		{
			prefixes = REP;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_FWAIT)
		{
			prefixes = FWAIT;
		}
		if (ptr_OpEntry[i].ReqPrefix & 0x01)
		{
			// group, prefixes
			if ((ptr_OpEntry[i].OPExt & 0x80) && (ptr_OpEntry[i].ReqPrefix & 0xFE))
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X/%x       %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// prefixes
			else if (ptr_OpEntry[i].ReqPrefix & 0xFE)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X         %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// group
			else if (ptr_OpEntry[i].OPExt & 0x80)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X/%x       %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
			}
			// default
			else
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X         %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
			}
		}
	}

	// release file stream
	fclose(File_Handler);


	// Phase 12. 1-byte opcode 0F3A-- / 32-bit address -- / EXPAND_MODRM

	// point to valid file
	File_Handler = File_Handler_11;
	// do the actual query
	lOpMatch = xEnumOPCode((E_XB_OP)E_3B_OP_0F3A, (E_ADM)E_AD32,
		L"xxxxxxxxxxxxxxxx", ptr_OpEntry, 15887, (DWORD)OPTION_EXPAND_MODRM_EA);

	// do the actual write
	for (unsigned int i = 0; i < lOpMatch; i++)
	{
		if (ptr_OpEntry[i].ReqPrefix & PF_Operand)
		{
			prefixes = opdsize;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REPNE)
		{
			prefixes = REPNE;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_REP)
		{
			prefixes = REP;
		}
		else if (ptr_OpEntry[i].ReqPrefix & PF_FWAIT)
		{
			prefixes = FWAIT;
		}
		if (ptr_OpEntry[i].ReqPrefix & 0x01)
		{
			// group, prefixes
			if ((ptr_OpEntry[i].OPExt & 0x80) && (ptr_OpEntry[i].ReqPrefix & 0xFE))
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X/%x       %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// prefixes
			else if (ptr_OpEntry[i].ReqPrefix & 0xFE)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
				else
					fwprintf(File_Handler, L"%02X         %s (%s)\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm, prefixes);
			}
			// group
			else if (ptr_OpEntry[i].OPExt & 0x80)
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X/%x [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X/%x [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X/%x       %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].OPExt & 0x07, ptr_OpEntry[i].strDisasm);
			}
			// default
			else
			{
				if ((ptr_OpEntry[i].OPExt & 0x20) && (ptr_OpEntry[i].OPExt & 0x08))
					fwprintf(File_Handler, L"%02X   [11B] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else if (ptr_OpEntry[i].OPExt & 0x20)
					fwprintf(File_Handler, L"%02X   [mem] %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
				else
					fwprintf(File_Handler, L"%02X         %s\n", ptr_OpEntry[i].OP, ptr_OpEntry[i].strDisasm);
			}
		}
	}

	// release file stream
	fclose(File_Handler);

	// point to valid file
	File_Handler = File_Handler_12;
	// release file stream
	fclose(File_Handler);

	// de-allocate large memory pool for temp data
	free(ptr_OpEntry);


}
