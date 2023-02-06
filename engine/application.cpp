#include "application.h"

namespace u2
{
	bool Application::isRunning = true;
	std::shared_ptr<Platform> Application::plat = std::make_shared<Platform>();
	std::shared_ptr<Render> Application::renderContext = std::make_shared<Render>();

	bool Application::IsRunning(void)
	{
		return isRunning;
	}

	void Application::Quit(void)
	{
		isRunning = false;
	}

	void Application::OnStart(void)
	{
		plat->LoadWindow("U2 Render", 800, 600);
		renderContext->OnStart();
	}

	void Application::OnTick(void)
	{
		renderContext->OnTick();
	}

	void Application::OnDestroy(void)
	{

	}
}
