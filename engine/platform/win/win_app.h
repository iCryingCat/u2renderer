#ifndef _WINAPP_H_
#define _WINAPP_H_

#include <windows.h>
#include <windowsX.h>
#include <string>
#include <assert.h>

using string = std::string;

namespace u2
{
	class WinApp
	{
	private:
		string name = "Default Win App";
		int width = 800;
		int height = 600;

		LPCSTR LPSZ_CLASS_NAME = "U2 Render Win App";
		HINSTANCE hInstance = NULL;
		HWND hwnd = NULL;
		HDC hdc = NULL;

	private:
		void RegisterWNDClass();
		HWND InitHWND(LPCSTR title, int w, int h);
		HDC InitDC(LONG w, LONG h);
		static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	public:
		WinApp() {}
		~WinApp() {}

		void Init(LPCSTR name, int w, int h);
		void OnStart(void);
		void OnTick();
	};
}
#endif // !_WINAPP_H_