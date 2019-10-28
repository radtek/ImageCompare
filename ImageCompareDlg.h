
// ImageCompareDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include <string>
#include <vector>

// CImageCompareDlg �Ի���
class CImageCompareDlg : public CDialogEx
{
public:
	std::string m_strSrcDir;
	std::string m_strDstDir;
	std::vector<std::string> m_srcList;
	std::vector<std::string> m_dstList;
	CImage m_src;
	CImage m_dst;
	CRect m_rtSrc;
	CRect m_rtDst;
	bool m_isScan;
	bool m_showWarning;
	int padding_w;
	int padding_h;
	bool m_recursive;
	int m_nSleep;
	bool Load(int cur, bool showWarning=true);

// ����
public:
	CImageCompareDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IMAGECOMPARE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileSet();
	afx_msg void OnFileQuit();
	CStatic m_PicSrc;
	CStatic m_PicDst;
	CEdit m_EditPSNR;
	CEdit m_EditSSIM;
	afx_msg void OnBnClickedPrev();
	afx_msg void OnBnClickedNext();
	int m_nCurPic;
	int m_nTotalPic;
	double m_fPSNR;
	double m_fSSIM;
	afx_msg void OnBnClickedButtonScan();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnDestroy();
	CButton m_ButtonPrev;
	CButton m_ButtonNext;
	CEdit m_EditSrcName;
	CString m_strSrcName;
	CEdit m_EditDstName;
	CString m_strDstName;
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	CEdit m_EditCur;
	CEdit m_EditTotal;
};
