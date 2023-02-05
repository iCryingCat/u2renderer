#include "win_app.h"

namespace u2
{
	void WinApp::BootStrap(LPCSTR title, int w, int h)
	{
		this->RegisterWNDClass();
		this->hwnd = this->InitHWND(title, w, h);
		this->InitDC(w, h);
	}

	void WinApp::RegisterWNDClass()
	{
		this->hInstance = GetModuleHandle(NULL);

		WNDCLASS wc = { 0 };
		wc.lpfnWndProc = WinApp::WindowProc;
		wc.hInstance = this->hInstance;
		wc.lpszClassName = LPSZ_CLASS_NAME;
		RegisterClass(&wc);
	}

	HWND WinApp::InitHWND(LPCSTR title, int w, int h)
	{
		auto hwnd = CreateWindowEx(
			NULL,
			LPSZ_CLASS_NAME,
			title,
			NULL,
			0,
			0,
			w,
			h,
			NULL,
			NULL,
			this->hInstance,
			this);
		assert(this->hwnd != NULL);
		return hwnd;
	}

	HDC WinApp::InitDC(LONG w, LONG h)
	{
		auto dc = GetDC(this->hwnd);
		dc = CreateCompatibleDC(dc);
		ReleaseDC(this->hwnd, dc);
		BITMAPINFOHEADER bitMapHeader;
		bitMapHeader.biWidth = w;
		bitMapHeader.biHeight = h;
		unsigned char* buff;
		auto bitMap = CreateDIBSection(dc, (BITMAPINFO*)&bitMapHeader, DIB_RGB_COLORS, (void**)&buff, NULL, 0);
		assert(bitMap != NULL);
		for (int i = 0; i < w; ++i) {
			for (int j = 0; j < w; ++j) {
				if (i == 4) {
					buff[0] = (unsigned char)144;
					buff[1] = (unsigned char)144;
					buff[2] = (unsigned char)144;
				}
			}
		}

		return dc;
	}

	LRESULT CALLBACK WinApp::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
	{
		switch (uMsg)
		{
		case WM_KEYDOWN:

			break;
		case WM_KEYUP:

			break;
		case WM_LBUTTONDOWN:

			break;
		case WM_RBUTTONDOWN:

			break;
		case WM_RBUTTONUP:

			break;
		case WM_MOUSEWHEEL:

			break;
		default:
			break;
		}
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
	}
}