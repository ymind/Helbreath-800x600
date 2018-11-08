/*
*	800x600 resolution by sLeeq
*	Based on v3.82 sources
*	https://github.com/sleeqeels/Helbreath-800x600
*/

#include <windows.h>
#include <winbase.h>

class CMyDib
{
public:
	CMyDib(char *szFilename, unsigned long dwFilePointer);
	~CMyDib();
	void PaintImage(HDC hDC);
	WORD m_wWidthX;
	WORD m_wWidthY;
	WORD m_wColorNums;//bmp
	LPSTR m_lpDib;
	LPBITMAPINFO m_bmpInfo; //bmp
};