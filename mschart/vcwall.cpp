// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "vcwall.h"

// Dispatch interfaces referenced by this interface
#include "VcBrush.h"
#include "vcpen.h"


/////////////////////////////////////////////////////////////////////////////
// CVcWall properties

/////////////////////////////////////////////////////////////////////////////
// CVcWall operations

float CVcWall::GetWidth()
{
	float result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void CVcWall::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CVcBrush CVcWall::GetBrush()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CVcBrush(pDispatch);
}

CVcPen CVcWall::GetPen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CVcPen(pDispatch);
}
