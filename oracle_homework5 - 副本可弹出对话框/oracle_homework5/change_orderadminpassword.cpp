// change_orderadminpassword.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_orderadminpassword.h"
#include "afxdialogex.h"


// change_orderadminpassword �Ի���

IMPLEMENT_DYNAMIC(change_orderadminpassword, CDialogEx)

change_orderadminpassword::change_orderadminpassword(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_orderadminpassword::IDD, pParent)
	, infor_1(_T(""))
{

}

change_orderadminpassword::~change_orderadminpassword()
{
}

void change_orderadminpassword::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, infor_1);
}


BEGIN_MESSAGE_MAP(change_orderadminpassword, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &change_orderadminpassword::OnEnChangeEdit2)
	ON_BN_CLICKED(IDOK, &change_orderadminpassword::OnBnClickedOk)
END_MESSAGE_MAP()


// change_orderadminpassword ��Ϣ�������


void change_orderadminpassword::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT2, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_orderadminpassword::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
