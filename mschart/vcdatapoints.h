#if !defined(AFX_VCDATAPOINTS_H__FA71E62D_0EF4_49D7_AA8A_2DBAB0EAB4DD__INCLUDED_)
#define AFX_VCDATAPOINTS_H__FA71E62D_0EF4_49D7_AA8A_2DBAB0EAB4DD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CVcDataPoint;

/////////////////////////////////////////////////////////////////////////////
// CVcDataPoints wrapper class

class CVcDataPoints : public COleDispatchDriver
{
public:
	CVcDataPoints() {}		// Calls COleDispatchDriver default constructor
	CVcDataPoints(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CVcDataPoints(const CVcDataPoints& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	CVcDataPoint GetItem(short Index);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VCDATAPOINTS_H__FA71E62D_0EF4_49D7_AA8A_2DBAB0EAB4DD__INCLUDED_)
