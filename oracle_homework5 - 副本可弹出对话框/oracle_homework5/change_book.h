#pragma once


// change_book 对话框

class change_book : public CDialogEx
{
	DECLARE_DYNAMIC(change_book)

public:
	change_book(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_book();

// 对话框数据
	enum { IDD = IDD_change_book };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:

	bool isbnok = 0;
	
	afx_msg void OnBnClickedOk();
	CString infor_1;
	CString infor_2;
	CString infor_3;
	CString infor_4;
	CString infor_5;
	CString infor_6;
	CString infor_7;
	CString infor_8;
	afx_msg void OnEnChangeEdit9();
	afx_msg void OnEnChangeEdit10();
	afx_msg void OnEnChangeEdit11();
	afx_msg void OnEnChangeEdit12();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnEnChangeEdit7();
	afx_msg void OnEnChangeEdit8();
};
