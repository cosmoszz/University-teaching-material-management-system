// change_order.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_order.h"
#include "afxdialogex.h"


// change_order �Ի���

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


// change_order ��Ϣ�������


HBRUSH change_order::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  �ڴ˸��� DC ���κ�����

	// TODO:  ���Ĭ�ϵĲ������軭�ʣ��򷵻���һ������
	if (pWnd->GetDlgCtrlID() == IDC_STATIC)
	{
		pDC->SetTextColor(RGB(0, 0, 0));
	}
	return hbr;
}


void change_order::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT2, infor_2);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT3, infor_3);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnEnChangeEdit6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT4, infor_4);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnEnChangeEdit7()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT7, infor_5);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnEnChangeEdit8()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT8, infor_6);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnEnChangeEdit9()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT9, infor_7);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnEnChangeEdit10()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT10, infor_8);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void change_order::OnBnClickedOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	this->isbnok = 1;
	CDialogEx::OnOK();
}


void change_order::OnEnChangeEdit11()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	GetDlgItemText(IDC_EDIT11, infor_9);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
