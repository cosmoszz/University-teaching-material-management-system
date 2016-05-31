// change_pressadmin.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_pressadmin.h"
#include "afxdialogex.h"


// change_pressadmin 对话框

IMPLEMENT_DYNAMIC(change_pressadmin, CDialogEx)

change_pressadmin::change_pressadmin(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_pressadmin::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
	, infor_5(_T(""))
{

}

change_pressadmin::~change_pressadmin()
{
}

void change_pressadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
	DDX_Text(pDX, IDC_EDIT2, infor_2);
	DDX_Text(pDX, IDC_EDIT3, infor_3);
	DDX_Text(pDX, IDC_EDIT5, infor_4);
	DDX_Text(pDX, IDC_EDIT6, infor_5);
}


BEGIN_MESSAGE_MAP(change_pressadmin, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_pressadmin::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &change_pressadmin::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &change_pressadmin::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT5, &change_pressadmin::OnEnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT6, &change_pressadmin::OnEnChangeEdit6)
	ON_BN_CLICKED(IDOK, &change_pressadmin::OnBnClickedOk)
END_MESSAGE_MAP()


// change_pressadmin 消息处理程序


void change_pressadmin::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void change_pressadmin::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT2, infor_2);
	// TODO:  在此添加控件通知处理程序代码
}


void change_pressadmin::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT3, infor_3);
	// TODO:  在此添加控件通知处理程序代码
}


void change_pressadmin::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT5, infor_4);
	// TODO:  在此添加控件通知处理程序代码
}


void change_pressadmin::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT6, infor_5);
	// TODO:  在此添加控件通知处理程序代码
}


void change_pressadmin::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
