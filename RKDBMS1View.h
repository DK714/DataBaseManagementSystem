
// RKDBMS1View.h : CRKDBMS1View ��Ľӿ�
//

#pragma once


class CRKDBMS1View : public CView
{
protected: // �������л�����
	CRKDBMS1View();
	DECLARE_DYNCREATE(CRKDBMS1View)

// ����
public:
	CRKDBMS1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CRKDBMS1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // RKDBMS1View.cpp �еĵ��԰汾
inline CRKDBMS1Doc* CRKDBMS1View::GetDocument() const
   { return reinterpret_cast<CRKDBMS1Doc*>(m_pDocument); }
#endif

