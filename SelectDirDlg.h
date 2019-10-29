#pragma once
#include "afxwin.h"


// SelectDirDlg �Ի���

class SelectDirDlg : public CDialogEx
{
	DECLARE_DYNAMIC(SelectDirDlg)

public:
	SelectDirDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SelectDirDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SETPATH };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_EditSrcDir;
	CEdit m_EditDstDir;
	CString m_strSrcDir;
	CString m_strDstDir;
	afx_msg void OnEnSetfocusEditSrcPath();
	afx_msg void OnEnSetfocusEditDstPath();
	CButton m_ButtonOK;
	CEdit m_EditScanTime;
	int m_nScanTime;
	bool m_bRecursive;
	static bool m_1v1Images; // ͼ��1��1�Ƚ�
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedRadioRecursive();
	afx_msg void OnBnClickedRadioFile();
};
