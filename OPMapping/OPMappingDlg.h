
// OPMappingDlg.h : 標頭檔
//

#pragma once


// COPMappingDlg 對話方塊
class COPMappingDlg : public CDialog
{
// 建構
public:
	COPMappingDlg(CWnd* pParent = NULL);	// 標準建構函式

// 對話方塊資料
	enum { IDD = IDD_OPMAPPING_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支援


// 程式碼實作
protected:
	HICON m_hIcon;
	CEdit m_OPInput;
	CListBox m_strAsmList;
	BOOL m_bDecodeOPMap;
	BOOL m_bExpandEA;
	int m_AddrMode;
	int m_eOPTab;
	// 產生的訊息對應函式
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();

	afx_msg void OnBnClickedButton1();
};
