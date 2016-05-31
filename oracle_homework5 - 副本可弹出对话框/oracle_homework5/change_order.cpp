// change_order.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_order.h"
#include "afxdialogex.h"


// change_order 对话框

IMPLEMENT_DYNAMIC(change_order, CDialogEx)

change_order::change_order(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_order::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
	, infor_5(_T(""))
	, infor_6(_T(""))
	, infor_7(_T(""))
	, infor_8(_T(""))
	, infor_9(_T(""))
{

}

change_order::~change_order()
{
}

void change_order::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
	DDX_Text(pDX, IDC_EDIT2, infor_2);
	DDX_Text(pDX, IDC_EDIT3, infor_3);
	DDX_Text(pDX, IDC_EDIT6, infor_4);
	DDX_Text(pDX, IDC_EDIT7, infor_5);
	DDX_Text(pDX, IDC_EDIT8, infor_6);
	DDX_Text(pDX, IDC_EDIT9, infor_7);
	DDX_Text(pDX, IDC_EDIT10, infor_8);
	DDX_Text(pDX, IDC_EDIT11, infor_9);
}


BEGIN_MESSAGE_MAP(change_order, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_EN_CHANGE(IDC_EDIT1, &change_order::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &change_order::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &change_order::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT6, &change_order::OnEnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT7, &change_order::OnEnChangeEdit7)
	ON_EN_CHANGE(IDC_EDIT8, &change_order::OnEnChangeEdit8)
	ON_EN_CHANGE(IDC_EDIT9, &change_order::OnEnChangeEdit9)
	ON_EN_CHANGE(IDC_EDIT10, &change_order::OnEnChangeEdit10)
	ON_BN_CLICKED(IDOK, &change_order::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT11, &change_order::OnEnChangeEdit11)
END_MESSAGE_MAP()


// change_order 消息处理程序


HBRUSH change_order::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  在此更改 DC 的任何特性

	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
	if (pWnd->GetDlgCtrlID() == IDC_STATIC)
	{
		pDC->SetTextColor(RGB(0, 0, 0));
	}
	return hbr;
}


void change_order::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void change_order::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT2, infor_2);
	// TODO:  在此添加控件通知处理程序代码
}


void change_order::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT3, infor_3);
	// TODO:  在此添加控件通知处理程序代码
}


void change_order::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT4, infor_4);
	// TODO:  在此添加控件通知处理程序代码
}


void change_order::OnEnChangeEdit7()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT7, infor_5);
	// TODO:  在此添加控件通知处理程序代码
}


void change_order::OnEnChangeEdit8()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT8, infor_6);
	// TODO:  在此添加控件通知处理程序代码
}


void change_order::OnEnChangeEdit9()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT9, infor_7);
	// TODO:  在此添加控件通知处理程序代码
}


void change_order::OnEnChangeEdit10()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT10, infor_8);
	// TODO:  在此添加控件通知处理程序代码
}


void change_order::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}


void change_order::OnEnChangeEdit11()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT11, infor_9);
	// TODO:  在此添加控件通知处理程序代码
}
