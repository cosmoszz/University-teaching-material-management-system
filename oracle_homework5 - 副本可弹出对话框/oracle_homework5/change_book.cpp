// change_book.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_book.h"
#include "afxdialogex.h"


// change_book �Ի���

IMPLEMENT_DYNAMIC(change_book, CDialogEx)

change_book::change_book(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_book::IDD, pParent)
	
	, infor_1(_T(""))
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
	, infor_5(_T(""))
	, infor_6(_T(""))
	, infor_7(_T(""))
	, infor_8(_T(""))
{

}

change_book::~change_book()
{
}

void change_book::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_EDIT9, infor_1);
	DDX_Text(pDX, IDC_EDIT10, infor_2);
	DDX_Text(pDX, IDC_EDIT11, infor_3);
	DDX_Text(pDX, IDC_EDIT12, infor_4);
	DDX_Text(pDX, IDC_EDIT4, infor_5);
	DDX_Text(pDX, IDC_EDIT6, infor_6);
	DDX_Text(pDX, IDC_EDIT7, infor_7);
	DDX_Text(pDX, IDC_EDIT8, infor_8);
}


BEGIN_MESSAGE_MAP(change_book, CDialogEx)
	
	ON_BN_CLICKED(IDOK, &change_book::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT9, &change_book::OnEnChangeEdit9)
	ON_EN_CHANGE(IDC_EDIT10, &change_book::OnEnChangeEdit10)
	ON_EN_CHANGE(IDC_EDIT11, &change_book::OnEnChangeEdit11)
	ON_EN_CHANGE(IDC_EDIT12, &change_book::OnEnChangeEdit12)
	ON_EN_CHANGE(IDC_EDIT4, &change_book::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT6, &change_book::OnEnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT7, &change_book::OnEnChangeEdit7)
	ON_EN_CHANGE(IDC_EDIT8, &change_book::OnEnChangeEdit8)
END_MESSAGE_MAP()


// change_book ��Ϣ�������





void change_book::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}


void change_book::OnEnChangeEdit9()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT9, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_book::OnEnChangeEdit10()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT10, infor_2);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_book::OnEnChangeEdit11()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT11, infor_3);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_book::OnEnChangeEdit12()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT12, infor_4);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_book::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT4, infor_5);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_book::OnEnChangeEdit6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT6, infor_6);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_book::OnEnChangeEdit7()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT7, infor_7);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_book::OnEnChangeEdit8()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT8, infor_8);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
