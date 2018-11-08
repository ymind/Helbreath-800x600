/*
*	800x600 resolution by sLeeq
*	Based on v3.82 sources
*	https://github.com/sleeqeels/Helbreath-800x600
*/

// Tile.h: interface for the CTile class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TILE_H__12609161_8060_11D2_A8E6_00001C7030A6__INCLUDED_)
#define AFX_TILE_H__12609161_8060_11D2_A8E6_00001C7030A6__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include <windows.h>
#include "Item.h"

#define DEF_TILE_PER_ITEMS	12

class CTile  
{												  
public:
	CTile();
	virtual ~CTile();

	char  m_cOwnerClass;
	short m_sOwner;

	char  m_cDeadOwnerClass;
	short m_sDeadOwner;

	class CItem * m_pItem[DEF_TILE_PER_ITEMS];
	char  m_cTotalItem;

	WORD  m_wDynamicObjectID;
	short m_sDynamicObjectType;
	DWORD m_dwDynamicObjectRegisterTime;

	BOOL  m_bIsMoveAllowed, m_bIsTeleport, m_bIsWater, m_bIsFarm, m_bIsTempMoveAllowed;

	int   m_iOccupyStatus;
	int   m_iOccupyFlagIndex;

	int	  m_iAttribute;
	
	
};

#endif // !defined(AFX_TILE_H__12609161_8060_11D2_A8E6_00001C7030A6__INCLUDED_)
