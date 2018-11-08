/*
*	800x600 resolution by sLeeq
*	Based on v3.82 sources
*	https://github.com/sleeqeels/Helbreath-800x600
*/

// GuildsMan.h: interface for the CGuildsMan class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GUILDSMAN_H__53AD3DA0_DD6A_11D2_B145_00001C7030A6__INCLUDED_)
#define AFX_GUILDSMAN_H__53AD3DA0_DD6A_11D2_B145_00001C7030A6__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include <windows.h>

class CGuildsMan  
{
public:
	
	CGuildsMan();
	virtual ~CGuildsMan();			    

	char m_cName[11];
	int  m_iRank;
};

#endif // !defined(AFX_GUILDSMAN_H__53AD3DA0_DD6A_11D2_B145_00001C7030A6__INCLUDED_)
