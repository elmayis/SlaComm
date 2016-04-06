
// SlaCommDlg.h : header file
//

#pragma once

#include <memory>
#include "afxcmn.h"

class Serial;

// CSlaCommDlg dialog
class CSlaCommDlg : public CDialogEx
{
// Construction
public:
	CSlaCommDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SLACOMM_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
   afx_msg void OnBnClickedButtonDownload();
   DECLARE_MESSAGE_MAP()

private:

   std::shared_ptr<Serial> m_spoSerialComm;
   CRichEditCtrl m_oOutput;
};
