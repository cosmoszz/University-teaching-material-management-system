#pragma once


// change_librarian 对话框

class change_librarian : public CDialogEx
{
	DECLARE_DYNAMIC(change_librarian)

public:
	change_librarian(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_librarian();

// 对话框数据
	enum { IDD = IDD_change_librarian };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	CString infor_2;
	CString infor_3;
	CString infor_4;
	CString infor_5;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnBnClickedOk();
};
