/*
*	800x600 resolution by sLeeq
*	Based on v3.82 sources
*	https://github.com/sleeqeels/Helbreath-800x600
*/

// ItemName.cpp: implementation of the CItemName class.
//
//////////////////////////////////////////////////////////////////////

#include "ItemName.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CItemName::CItemName()
{
	ZeroMemory(m_cOriginName, sizeof(m_cOriginName));
	ZeroMemory(m_cName, sizeof(m_cName));
}

CItemName::~CItemName()
{

}


