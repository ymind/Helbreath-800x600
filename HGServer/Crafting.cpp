/*
*	800x600 resolution by sLeeq
*	Based on v3.82 sources
*	https://github.com/sleeqeels/Helbreath-800x600
*/

// Crafting.cpp: implementation of the CPortion class.
//
//////////////////////////////////////////////////////////////////////

#include "Crafting.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CCrafting::CCrafting()
{
 int i;
	
	ZeroMemory(m_cName, sizeof(m_cName));
	m_iSkillLimit = 0;
	m_iDifficulty = 0;

	for (i = 0; i < 12; i++)
		m_sArray[i] = -1;
}

CCrafting::~CCrafting()
{

}
