#if !defined(AFX_VCLIGHTSOURCES_H__7A72D1B6_D360_4C86_A524_D091C0FD25F3__INCLUDED_)
#define AFX_VCLIGHTSOURCES_H__7A72D1B6_D360_4C86_A524_D091C0FD25F3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CVcLightSource;

/////////////////////////////////////////////////////////////////////////////
// CVcLightSources wrapper class

class CVcLightSources : public COleDispatchDriver
{
public:
	CVcLightSources() {}		// Calls COleDispatchDriver default constructor
	CVcLightSources(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CVcLightSources(const CVcLightSources& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	CVcLightSource Add(float X, float Y, float Z, float Intensity);
	void Remove(short Index);
	CVcLightSource GetItem(short Index);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VCLIGHTSOURCES_H__7A72D1B6_D360_4C86_A524_D091C0FD25F3__INCLUDED_)
