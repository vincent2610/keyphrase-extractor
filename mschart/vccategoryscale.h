#if !defined(AFX_VCCATEGORYSCALE_H__2BFF4EEF_1F43_4BFA_82BC_9FF4F394D322__INCLUDED_)
#define AFX_VCCATEGORYSCALE_H__2BFF4EEF_1F43_4BFA_82BC_9FF4F394D322__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CVcCategoryScale wrapper class

class CVcCategoryScale : public COleDispatchDriver
{
public:
	CVcCategoryScale() {}		// Calls COleDispatchDriver default constructor
	CVcCategoryScale(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CVcCategoryScale(const CVcCategoryScale& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetAuto();
	void SetAuto(BOOL bNewValue);
	short GetDivisionsPerLabel();
	void SetDivisionsPerLabel(short nNewValue);
	short GetDivisionsPerTick();
	void SetDivisionsPerTick(short nNewValue);
	BOOL GetLabelTick();
	void SetLabelTick(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VCCATEGORYSCALE_H__2BFF4EEF_1F43_4BFA_82BC_9FF4F394D322__INCLUDED_)
