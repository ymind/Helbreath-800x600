/*
*	800x600 resolution by sLeeq
*	Based on v3.82 sources
*	https://github.com/sleeqeels/Helbreath-800x600
*/

// Magic.cpp: implementation of the CMagic class.
//
//////////////////////////////////////////////////////////////////////

#include "Magic.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CMagic::CMagic()
{
	ZeroMemory(m_cName, sizeof(m_cName));
	m_iAttribute = 0;
}

CMagic::~CMagic()
{										    

}

