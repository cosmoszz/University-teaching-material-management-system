#pragma once


// change_teacher 对话框

class change_teacher : public CDialogEx
{
	DECLARE_DYNAMIC(change_teacher)

public:
	change_teacher(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_teacher();

// 对话框数据
	enum { IDD = IDD_change_teacher };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	CString infor_2;
	CString infor_3;
	CString infor_4;
	CString infor_5;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit6();
	bool isbnok = 0;
	afx_msg void OnBnClickedOk();
};
