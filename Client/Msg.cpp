/*
*	800x600 resolution by sLeeq
*	Based on v3.82 sources
*	https://github.com/sleeqeels/Helbreath-800x600
*/

// Msg.cpp: implementation of the CMsg class.
//
//////////////////////////////////////////////////////////////////////

#include "Msg.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CMsg::CMsg(char cType, char * pMsg, DWORD dwTime)
{
	m_cType = cType;

	m_pMsg = NULL;
	m_pMsg = new char [strlen(pMsg) + 1];
	ZeroMemory(m_pMsg, strlen(pMsg) + 1);
	strcpy(m_pMsg, pMsg);
	m_dwTime = dwTime;
	m_iObjectID = -1;
}

CMsg::~CMsg()
{
	if (m_pMsg != NULL) delete m_pMsg;
}
