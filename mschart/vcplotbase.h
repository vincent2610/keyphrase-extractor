#if !defined(AFX_VCPLOTBASE_H__5D5AFBB8_4B99_4F26_8AF8_6693D0ADF935__INCLUDED_)
#define AFX_VCPLOTBASE_H__5D5AFBB8_4B99_4F26_8AF8_6693D0ADF935__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CVcBrush;
class CVcPen;

/////////////////////////////////////////////////////////////////////////////
// CVcPlotBase wrapper class

class CVcPlotBase : public COleDispatchDriver
{
public:
	CVcPlotBase() {}		// Calls COleDispatchDriver default constructor
	CVcPlotBase(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CVcPlotBase(const CVcPlotBase& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	float GetBaseHeight();
	void SetBaseHeight(float newValue);
	CVcBrush GetBrush();
	CVcPen GetPen();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VCPLOTBASE_H__5D5AFBB8_4B99_4F26_8AF8_6693D0ADF935__INCLUDED_)
