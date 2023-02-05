#include "platform.h"

namespace u2
{
	void Platform::LoadWindow(string title, int w, int h)
	{
#ifdef WIN32
		this->winApp = std::make_shared<WinApp>();
		this->winApp->BootStrap(title.c_str(), w, h);
#endif // WIN32

	}

	void Platform::HandleInput(KEY_CODE code, int state)
	{

	}
}