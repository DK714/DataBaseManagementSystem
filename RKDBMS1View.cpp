
// RKDBMS1View.cpp : CRKDBMS1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CRKDBMS1View ����/����

CRKDBMS1View::CRKDBMS1View()
{
	// TODO: �ڴ˴���ӹ������

}

CRKDBMS1View::~CRKDBMS1View()
{
}

BOOL CRKDBMS1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CRKDBMS1View ����

void CRKDBMS1View::OnDraw(CDC* /*pDC*/)
{
	CRKDBMS1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CRKDBMS1View ��ӡ

BOOL CRKDBMS1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CRKDBMS1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CRKDBMS1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CRKDBMS1View ���

#ifdef _DEBUG
void CRKDBMS1View::AssertValid() const
{
	CView::AssertValid();
}

void CRKDBMS1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRKDBMS1Doc* CRKDBMS1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRKDBMS1Doc)));
	return (CRKDBMS1Doc*)m_pDocument;
}
#endif //_DEBUG


// CRKDBMS1View ��Ϣ�������
