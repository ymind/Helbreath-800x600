/*
*	800x600 resolution by sLeeq
*	Based on v3.82 sources
*	https://github.com/sleeqeels/Helbreath-800x600
*/

// Effect.cpp: implementation of the CEffect class.
//
//////////////////////////////////////////////////////////////////////

#include "Effect.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CEffect::CEffect()
{
	m_sType       = NULL;
	m_cFrame      = -1;
	m_cMaxFrame   = NULL;
	m_dwTime      = NULL;
	m_dwFrameTime = NULL;
}

CEffect::~CEffect()
{

}
