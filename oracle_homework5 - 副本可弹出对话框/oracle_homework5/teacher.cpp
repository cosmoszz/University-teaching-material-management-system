// teacher.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "teacher.h"
#include "afxdialogex.h"
#include "aspect_all_h.h"
#include <string>
using namespace std;
// teacher 对话框

IMPLEMENT_DYNAMIC(teacher, CDialogEx)

teacher::teacher(CWnd* pParent /*=NULL*/)
	: CDialogEx(teacher::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

teacher::~teacher()
{
}

void teacher::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TREE1, m_tree);
	DDX_Control(pDX, IDC_LIST1, m_list);
}


BEGIN_MESSAGE_MAP(teacher, CDialogEx)
	ON_NOTIFY(TVN_SELCHANGED, IDC_TREE1, &teacher::OnSelchangedteacherTree1)
END_MESSAGE_MAP()


// teacher 消息处理程序


BOOL teacher::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标
	


	HTREEITEM hRoot = m_tree.InsertItem(_T("功能列表"), 0, 0);
	m_tree.SetItemState(hRoot, TVIS_BOLD, TVIS_BOLD);
	HTREEITEM hSrc_1 = m_tree.InsertItem(_T("教材"), 0, 0, hRoot);

	m_tree.InsertItem(_T("查看教材"), 3, 3, hSrc_1);


	HTREEITEM hSrc_2 = m_tree.InsertItem(_T("征订情况"), 0, 0, hRoot);


	m_tree.InsertItem(_T("查看取书信息"), 3, 3, hSrc_2);
	m_tree.InsertItem(_T("查看订书信息"), 3, 3, hSrc_2);


	HTREEITEM hSrc_3 = m_tree.InsertItem(_T("订书"), 0, 0, hRoot);


	m_tree.InsertItem(_T("订购教材"), 3, 3, hSrc_3);



	HTREEITEM hSrc_4 = m_tree.InsertItem(_T("修改信息"), 0, 0, hRoot);


	m_tree.InsertItem(_T("修改密码"), 3, 3, hSrc_4);
	m_tree.InsertItem(_T("修改用户名"), 3, 3, hSrc_4);
	return true;
}

void teacher::OnSelchangedteacherTree1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO:  在此添加控件通知处理程序代码
	*pResult = 0;
	USES_CONVERSION;

	mysql_library_init(NULL, 0, 0);
	MYSQL mysql;
	mysql_init(&mysql);
	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gb2312");
	if (!mysql_real_connect(&mysql, "127.0.0.1", "root", "lovewho?1314", "test", 0, NULL, CLIENT_MULTI_STATEMENTS))//连接数据库
	{
		AfxMessageBox(_T("not to connect mysql"));
		return;
	}
	HTREEITEM selItem;
	//获得选择项
	selItem = m_tree.GetSelectedItem();
	//将选择项的值转化为DWORD值，也就是我们在m_tree.SetItemData函数中设定的项的值
	/*DWORD data = m_tree.GetItemData(selItem);
	CString inputData;
	inputData.Format("选择的项目为:%d", data);
	AfxMessageBox(inputData);*/
	CString str;
	str = m_tree.GetItemText(selItem);
	if (str == "修改密码")
	{

		change_teacherpassword run;
		run.DoModal();
		str = "";

		CString str;
		//str.Format(_T("update user set userpassword='%s' where username='%s' and userpassword='%s'"), run.infor_1, str_start_name, str_start_pwd);
		str += "update user set userpassword = '";
		str += run.infor_1;
		str += "' where username='";
		str += str_start_name;
		str += "' and userpassword='";
		str += str_start_pwd;
		str += "'";
		string s_copy = T2A(str);
		if (run.isbnok)
			mysql_query(&mysql, s_copy.c_str());

		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}
	if (str == "修改用户名")
	{

		change_teachername run;
		run.DoModal();
		str = "";

		CString str;
		//str.Format(_T("update user set username='%s' where username='%s' and userpassword='%s'"), run.infor_1, str_start_name, str_start_pwd);
		str += "update user set username = '";
		str += run.infor_1;
		str += "' where username='";
		str += str_start_name;
		str += "' and userpassword='";
		str += str_start_pwd;
		str += "'";
		string s_copy = T2A(str);
		if (run.isbnok)
			mysql_query(&mysql, s_copy.c_str());

		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}
	if (str == "查看教材")
	{
		int nCols = m_list.GetHeaderCtrl()->GetItemCount();
		for (int j = 0; j < nCols; j++)
		{
			m_list.DeleteColumn(0);
		}
		m_list.DeleteAllItems();//删除表数据



		str = "";

		CRect rect;
		// 获取编程语言列表视图控件的位置和大小    
		m_list.GetClientRect(&rect);

		// 为列表视图控件添加全行选中和栅格风格    
		m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		mysql_query(&mysql, "select * from book");          //执行SQL语句
		//mysql_query(&mysql, "insert into press values('西安电子科技大学出版社', '789987', '西安') ");
		MYSQL_RES *result = mysql_store_result(&mysql);
		int filedcount = mysql_num_fields(result);//获取字段数
		MYSQL_ROW row = NULL;//记录
		MYSQL_FIELD * filed = NULL;//字段
		int row_judge = 0;

		while (row = mysql_fetch_row(result))
		{
			if (row_judge == 0)
			{
				for (int i = 0; i < filedcount; i++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					//m_list.InsertItem(i, str_2);
				}
			}

			for (int i = 0, j = 0; j < filedcount; i++, j++)
			{
				filed = mysql_fetch_field_direct(result, i);
				CString str_1, str_2;
				str_1 = filed->name;
				str_2 = row[i];
				//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
				if (j == 0)
					m_list.InsertItem(row_judge, str_2);
				else
					m_list.SetItemText(row_judge, j, str_2);

			}
			row_judge++;
		}
		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}

	if (str == "查看取书信息")
	{
		int nCols = m_list.GetHeaderCtrl()->GetItemCount();
		for (int j = 0; j < nCols; j++)
		{
			m_list.DeleteColumn(0);
		}
		m_list.DeleteAllItems();//删除表数据
		str = "";

		CRect rect;
		// 获取编程语言列表视图控件的位置和大小    
		m_list.GetClientRect(&rect);

		// 为列表视图控件添加全行选中和栅格风格    
		m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		CString str_1;
		str_1 += "select *from view_teacher_Look_book_take where book_take_name='";
		str_1 += str_start_name;
		str_1 += "'";
		string s_copy = T2A(str_1);
		mysql_query(&mysql, s_copy.c_str());          //执行SQL语句
		//mysql_query(&mysql, "insert into press values('西安电子科技大学出版社', '789987', '西安') ");
		MYSQL_RES *result = mysql_store_result(&mysql);
		
		int filedcount = mysql_num_fields(result);//获取字段数

		MYSQL_ROW row = NULL;//记录
		MYSQL_FIELD * filed = NULL;//字段
		int row_judge = 0;

		while (row = mysql_fetch_row(result))
		{
			if (row_judge == 0)
			{
				for (int i = 0; i < filedcount; i++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					//m_list.InsertItem(i, str_2);
				}
			}

			for (int i = 0, j = 0; j < filedcount; i++, j++)
			{
				filed = mysql_fetch_field_direct(result, i);
				CString str_1, str_2;
				str_1 = filed->name;
				str_2 = row[i];
				//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
				if (j == 0)
					m_list.InsertItem(row_judge, str_2);
				else
					m_list.SetItemText(row_judge, j, str_2);

			}
			row_judge++;
		}
		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}

	if (str == "查看订书信息")
	{
		int nCols = m_list.GetHeaderCtrl()->GetItemCount();
		for (int j = 0; j < nCols; j++)
		{
			m_list.DeleteColumn(0);
		}
		m_list.DeleteAllItems();//删除表数据
		str = "";

		CRect rect;
		// 获取编程语言列表视图控件的位置和大小    
		m_list.GetClientRect(&rect);

		// 为列表视图控件添加全行选中和栅格风格    
		m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		CString str_1;
		str_1 += "select *from view_teacher_Look_book_order where book_order_name='";
		str_1 += str_start_name;
		str_1 += "'";
		string s_copy = T2A(str_1);
		mysql_query(&mysql, s_copy.c_str());           //执行SQL语句
		//mysql_query(&mysql, "insert into press values('西安电子科技大学出版社', '789987', '西安') ");
		MYSQL_RES *result = mysql_store_result(&mysql);
		int filedcount = mysql_num_fields(result);//获取字段数
		MYSQL_ROW row = NULL;//记录
		MYSQL_FIELD * filed = NULL;//字段
		int row_judge = 0;

		while (row = mysql_fetch_row(result))
		{
			if (row_judge == 0)
			{
				for (int i = 0; i < filedcount; i++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					//m_list.InsertItem(i, str_2);
				}
			}

			for (int i = 0, j = 0; j < filedcount; i++, j++)
			{
				filed = mysql_fetch_field_direct(result, i);
				CString str_1, str_2;
				str_1 = filed->name;
				str_2 = row[i];
				//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
				if (j == 0)
					m_list.InsertItem(row_judge, str_2);
				else
					m_list.SetItemText(row_judge, j, str_2);

			}
			row_judge++;
		}
		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}


	if (str == "查看订单")
	{
		int nCols = m_list.GetHeaderCtrl()->GetItemCount();
		for (int j = 0; j < nCols; j++)
		{
			m_list.DeleteColumn(0);
		}
		m_list.DeleteAllItems();//删除表数据



		str = "";

		CRect rect;
		// 获取编程语言列表视图控件的位置和大小    
		m_list.GetClientRect(&rect);

		// 为列表视图控件添加全行选中和栅格风格    
		m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		mysql_query(&mysql, "select * from book_order");          //执行SQL语句
		//mysql_query(&mysql, "insert into press values('西安电子科技大学出版社', '789987', '西安') ");
		MYSQL_RES *result = mysql_store_result(&mysql);
		int filedcount = mysql_num_fields(result);//获取字段数
		MYSQL_ROW row = NULL;//记录
		MYSQL_FIELD * filed = NULL;//字段
		int row_judge = 0;

		while (row = mysql_fetch_row(result))
		{
			if (row_judge == 0)
			{
				for (int i = 0; i < filedcount; i++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					//m_list.InsertItem(i, str_2);
				}
			}

			for (int i = 0, j = 0; j < filedcount; i++, j++)
			{
				filed = mysql_fetch_field_direct(result, i);
				CString str_1, str_2;
				str_1 = filed->name;
				str_2 = row[i];
				//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
				if (j == 0)
					m_list.InsertItem(row_judge, str_2);
				else
					m_list.SetItemText(row_judge, j, str_2);

			}
			row_judge++;
		}
		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}
	
	if (str == "订购教材")
	{
		teacher_order_book run;
		run.DoModal();
		str = "";

		CString str_1, str_2;
		str_1 += "insert into book_order values (";
		str_1 += "1,'";
		str_1 += run.infor_1;
		str_1 += "','";
		str_1 += run.infor_2;
		str_1 += "','";
		str_1 += run.infor_3;
		str_1 += "','";
		str_1 += run.infor_4;
		str_1 += "','";
		str_1 += run.infor_5;
		str_1 += "',";
		str_1 += run.infor_6;
		str_1 += ",";
		str_1 += run.infor_7;
		str_1 += ",0,'";
		str_1 += str_start_name;
		str_1 += "')";
		string s_copy = T2A(str_1);
		if (run.isbnok)
			mysql_query(&mysql, s_copy.c_str());
		selItem = m_tree.GetParentItem(selItem);
		m_tree.SelectItem(selItem);
	}
}



