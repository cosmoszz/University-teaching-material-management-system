// change_pressadmin.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_pressadmin.h"
#include "afxdialogex.h"


// change_pressadmin �Ի���

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


// change_pressadmin ��Ϣ�������


void change_pressadmin::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_pressadmin::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT2, infor_2);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_pressadmin::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT3, infor_3);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_pressadmin::OnEnChangeEdit5()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT5, infor_4);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_pressadmin::OnEnChangeEdit6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT6, infor_5);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_pressadmin::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}
