
// RKDBMS1View.cpp : CRKDBMS1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "RKDBMS1.h"
#endif

#include "RKDBMS1Doc.h"
#include "RKDBMS1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CRKDBMS1View

IMPLEMENT_DYNCREATE(CRKDBMS1View, CView)

BEGIN_MESSAGE_MAP(CRKDBMS1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CRKDBMS1View 构造/析构

CRKDBMS1View::CRKDBMS1View()
{
	// TODO: 在此处添加构造代码

}

CRKDBMS1View::~CRKDBMS1View()
{
}

BOOL CRKDBMS1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CRKDBMS1View 绘制

void CRKDBMS1View::OnDraw(CDC* /*pDC*/)
{
	CRKDBMS1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CRKDBMS1View 打印

BOOL CRKDBMS1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CRKDBMS1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CRKDBMS1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CRKDBMS1View 诊断

#ifdef _DEBUG
void CRKDBMS1View::AssertValid() const
{
	CView::AssertValid();
}

void CRKDBMS1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRKDBMS1Doc* CRKDBMS1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRKDBMS1Doc)));
	return (CRKDBMS1Doc*)m_pDocument;
}
#endif //_DEBUG


// CRKDBMS1View 消息处理程序
