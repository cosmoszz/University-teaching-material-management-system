#pragma once


// change_pressadmin �Ի���

class change_pressadmin : public CDialogEx
{
	DECLARE_DYNAMIC(change_pressadmin)

public:
	change_pressadmin(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~change_pressadmin();

// �Ի�������
	enum { IDD = IDD_change_pressadmin };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CString infor_1;
	CString infor_2;
	CString infor_3;
	CString infor_4;
	CString infor_5;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnBnClickedOk();
};
