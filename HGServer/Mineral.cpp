/*
*	800x600 resolution by sLeeq
*	Based on v3.82 sources
*	https://github.com/sleeqeels/Helbreath-800x600
*/

// Mineral.cpp: implementation of the CMineral class.
//
//////////////////////////////////////////////////////////////////////

#include "Mineral.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CMineral::CMineral(char cType, char cMapIndex, int sX, int sY, int iRemain)
{
	m_cType = cType;
	m_cMapIndex = cMapIndex;
	m_sX = sX;
	m_sY = sY;;
    m_iRemain = iRemain;
	m_iDifficulty = 0;
}

CMineral::~CMineral()
{

}
