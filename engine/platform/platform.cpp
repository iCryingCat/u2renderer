#include "platform.h"

namespace u2
{
	void Platform::DisplayWindow(string title, int w, int h)
	{
#ifdef WIN32
		this->winApp->Init(title.c_str(), w, h);
		this->winApp->OnStart();
#endif // WIN32

	}

	void Platform::HandleInput(KEY_CODE code, int state)
	{

	}

	void Platform::OnTick(void)
	{
#ifdef WIN32
		this->winApp->OnTick();
#endif

	}
}
