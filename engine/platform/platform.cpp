#include "platform.h"

namespace u2
{
	void Platform::LoadWindow(string title, int w, int h)
	{
#ifdef WIN32
		this->winApp->BootStrap(title.c_str(), w, h);
#endif // WIN32

	}

	void Platform::HandleInput(KEY_CODE code, int state)
	{

	}

	void Platform::OnTick(void)
	{
#ifdef WIN32
#endif

	}
}
