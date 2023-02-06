#ifndef _WINAPP_H_
#define _WINAPP_H_

#include <assert.h>
#include <windows.h>
#include <windowsX.h>

namespace u2
{
	class WinApp
	{
	private:
		LPCSTR LPSZ_CLASS_NAME = "U2 Render App";
		HINSTANCE hInstance = NULL;
		HWND hwnd = NULL;

	private:
		void RegisterWNDClass();
		HWND InitHWND(LPCSTR title, int w, int h);
		HDC InitDC(LONG w, LONG h);
		static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	public:
		WinApp() {}
		~WinApp() {}

	public:
		void BootStrap(LPCSTR title, int w, int h);
	};
}
#endif // !_WINAPP_H_