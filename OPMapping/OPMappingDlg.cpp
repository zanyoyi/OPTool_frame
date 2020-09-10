
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
		for(int i = 0 ; i < lOpMatch ; i++)
		{
			switch (OpEntry[i].ReqPrefix)
			{
			case 0x00000002:	// REP prefix
				memcpy(prefixes, L"REP", sizeof(L"REP"));
				break;
			case 0x00000004:	// REPNE prefix
				memcpy(prefixes, L"REPNE", sizeof(L"REPNE"));
				break;
			case 0x00000200:	// operand size prefix
				memcpy(prefixes, L"opdsize", sizeof(L"opdsize"));
				break;
			default:
				break;
			};

			// group, prefixes
			if ((OpEntry[i].OPExt & 0x80) && OpEntry[i].ReqPrefix)
			{
				if((OpEntry[i].OPExt & 0x20) && (OpEntry[i].OPExt & 0x08))
					strTemp.Format(_T("%02X/%x [11B] %s (%s)"), OpEntry[i].OP, OpEntry[i].OPExt & 0x07, OpEntry[i].strDisasm, prefixes);
				else if (OpEntry[i].OPExt & 0x20)
					strTemp.Format(_T("%02X/%x [mem] %s (%s)"), OpEntry[i].OP, OpEntry[i].OPExt & 0x07, OpEntry[i].strDisasm, prefixes);
				else
					strTemp.Format(_T("%02X/%x       %s (%s)"), OpEntry[i].OP, OpEntry[i].OPExt & 0x07, OpEntry[i].strDisasm, prefixes);
			}
			// prefixes
			else if (OpEntry[i].ReqPrefix)
			{
				strTemp.Format(_T("%02X         %s (%s)"), OpEntry[i].OP, OpEntry[i].strDisasm, prefixes);
			}
			// group
			else if(OpEntry[i].OPExt & 0x80)
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
				strTemp.Format(_T("%02X         %s"), OpEntry[i].OP, OpEntry[i].strDisasm);
			}
			m_strAsmList.AddString(strTemp);
		}
	}
}
