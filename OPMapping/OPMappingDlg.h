
// OPMappingDlg.h : ���Y��
//

#pragma once


// COPMappingDlg ��ܤ��
class COPMappingDlg : public CDialog
{
// �غc
public:
	COPMappingDlg(CWnd* pParent = NULL);	// �зǫغc�禡

// ��ܤ�����
	enum { IDD = IDD_OPMAPPING_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �䴩


// �{���X��@
protected:
	HICON m_hIcon;
	CEdit m_OPInput;
	CListBox m_strAsmList;
	BOOL m_bDecodeOPMap;
	BOOL m_bExpandEA;
	int m_AddrMode;
	int m_eOPTab;
	// ���ͪ��T�������禡
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();

	afx_msg void OnBnClickedButton1();
};
