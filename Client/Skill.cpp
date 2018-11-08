/*
*	800x600 resolution by sLeeq
*	Based on v3.82 sources
*	https://github.com/sleeqeels/Helbreath-800x600
*/

// Skill.cpp: implementation of the CSkill class.
//
//////////////////////////////////////////////////////////////////////

#include "Skill.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CSkill::CSkill()
{
	ZeroMemory(m_cName, sizeof(m_cName));

	m_iLevel = 0;
	m_bIsUseable = FALSE;
	m_cUseMethod = NULL;
}

CSkill::~CSkill()
{

}
