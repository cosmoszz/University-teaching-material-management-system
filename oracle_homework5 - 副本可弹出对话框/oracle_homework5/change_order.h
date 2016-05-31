#pragma once


// change_order 对话框

class change_order : public CDialogEx
{
	DECLARE_DYNAMIC(change_order)

public:
	change_order(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_order();

// 对话框数据
	enum { IDD = IDD_change_order };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CString infor_1;
	CString infor_2;
	CString infor_3;
	CString infor_4;
	CString infor_5;
	CString infor_6;
	CString infor_7;
	CString infor_8;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnEnChangeEdit7();
	afx_msg void OnEnChangeEdit8();
	afx_msg void OnEnChangeEdit9();
	afx_msg void OnEnChangeEdit10();
	bool isbnok = 0;
	afx_msg void OnBnClickedOk();
	CString infor_9;
	afx_msg void OnEnChangeEdit11();
};
