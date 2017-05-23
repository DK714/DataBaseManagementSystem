
// RKDBMS1View.h : CRKDBMS1View 类的接口
//

#pragma once


class CRKDBMS1View : public CView
{
protected: // 仅从序列化创建
	CRKDBMS1View();
	DECLARE_DYNCREATE(CRKDBMS1View)

// 特性
public:
	CRKDBMS1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CRKDBMS1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // RKDBMS1View.cpp 中的调试版本
inline CRKDBMS1Doc* CRKDBMS1View::GetDocument() const
   { return reinterpret_cast<CRKDBMS1Doc*>(m_pDocument); }
#endif

