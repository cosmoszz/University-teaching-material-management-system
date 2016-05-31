// change_press.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_press.h"
#include "afxdialogex.h"


// change_press 对话框

IMPLEMENT_DYNAMIC(change_press, CDialogEx)

change_press::change_press(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_press::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
{

}

change_press::~change_press()
{
}

void change_press::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, infor_1);
	DDX_Text(pDX, IDC_EDIT1, infor_2);
	DDX_Text(pDX, IDC_EDIT2, infor_3);
	DDX_Text(pDX, IDC_EDIT4, infor_4);
}


BEGIN_MESSAGE_MAP(change_press, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT3, &change_press::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT1, &change_press::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &change_press::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT4, &change_press::OnEnChangeEdit4)
	ON_BN_CLICKED(IDOK, &change_press::OnBnClickedOk)
END_MESSAGE_MAP()


// change_press 消息处理程序


void change_press::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT3, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void change_press::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_2);
	// TODO:  在此添加控件通知处理程序代码
}


void change_press::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT2, infor_3);
	// TODO:  在此添加控件通知处理程序代码
}


void change_press::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT4, infor_4);
	// TODO:  在此添加控件通知处理程序代码
}


void change_press::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
