/*
*	800x600 resolution by sLeeq
*	Based on v3.82 sources
*	https://github.com/sleeqeels/Helbreath-800x600
*/

// OccupyFlag.cpp: implementation of the COccupyFlag class.
//
//////////////////////////////////////////////////////////////////////

#include "OccupyFlag.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

COccupyFlag::COccupyFlag(int dX, int dY, char cSide, int iEKNum, int iDOI)
{
	m_sX = dX;
	m_sY = dY;

	m_cSide = cSide;
	m_iEKCount = iEKNum;

	m_iDynamicObjectIndex = iDOI;
}

COccupyFlag::~COccupyFlag()
{

}
