#include"stdafx.h"
#include "ScreenShot.h"
int _tmain(int argc, _TCHAR* argv[])
{
	HRESULT hr = Direct3D9TakeScreenshots(D3DADAPTER_DEFAULT, 1);
	return 0;
}

