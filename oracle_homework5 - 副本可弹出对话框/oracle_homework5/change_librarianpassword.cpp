// change_librarianpassword.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_librarianpassword.h"
#include "afxdialogex.h"


// change_librarianpassword �Ի���

IMPLEMENT_DYNAMIC(change_librarianpassword, CDialogEx)

change_librarianpassword::change_librarianpassword(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_librarianpassword::IDD, pParent)
	, infor_1(_T(""))
{

}

change_librarianpassword::~change_librarianpassword()
{
}

void change_librarianpassword::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(change_librarianpassword, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_librarianpassword::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_librarianpassword::OnBnClickedOk)
END_MESSAGE_MAP()


// change_librarianpassword ��Ϣ�������


void change_librarianpassword::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_librarianpassword::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
