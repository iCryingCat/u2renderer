#include "application.h"

namespace u2
{
	bool Application::IsPlaying(void)
	{
		return this->isPlaying;
	}

	void Application::Exit(void)
	{
		this->isPlaying = false;
	}

	void Application::OnStart()
	{
		this->isPlaying = true;

		this->plat = std::make_shared<Platform>();
		this->plat->LoadWindow("U2 Render", 800, 600);
		this->renderContext->Load();
	}

	void Application::OnUpdate(void)
	{
		this->renderContext->Tick();
	}

	void u2::Application::OnDestroy(void)
	{

	}
}
