// change_orderadmin.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_orderadmin.h"
#include "afxdialogex.h"


// change_orderadmin 对话框

IMPLEMENT_DYNAMIC(change_orderadmin, CDialogEx)

change_orderadmin::change_orderadmin(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_orderadmin::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
	, infor_5(_T(""))
{

}

change_orderadmin::~change_orderadmin()
{
}

void change_orderadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
	DDX_Text(pDX, IDC_EDIT2, infor_2);
	DDX_Text(pDX, IDC_EDIT3, infor_3);
	DDX_Text(pDX, IDC_EDIT4, infor_4);
	DDX_Text(pDX, IDC_EDIT5, infor_5);
}


BEGIN_MESSAGE_MAP(change_orderadmin, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_orderadmin::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &change_orderadmin::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &change_orderadmin::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &change_orderadmin::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT5, &change_orderadmin::OnEnChangeEdit5)
	ON_BN_CLICKED(IDOK, &change_orderadmin::OnBnClickedOk)
END_MESSAGE_MAP()


// change_orderadmin 消息处理程序


void change_orderadmin::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void change_orderadmin::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT2, infor_2);
	// TODO:  在此添加控件通知处理程序代码
}


void change_orderadmin::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT3, infor_3);
	// TODO:  在此添加控件通知处理程序代码
}


void change_orderadmin::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT4, infor_4);
	// TODO:  在此添加控件通知处理程序代码
}


void change_orderadmin::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT5, infor_5);
	// TODO:  在此添加控件通知处理程序代码
}


void change_orderadmin::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
