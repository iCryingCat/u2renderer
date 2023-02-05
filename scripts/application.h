#pragma once

#include <memory>

#include "platform/platform.h"
#include "platform/platform.cpp"
#include "render/render.h"
#include "render/render.cpp"

namespace u2
{
	class Application
	{
	private:
		std::shared_ptr<Platform> plat;
		std::shared_ptr<Render> renderContext;

	private:
		bool isPlaying = true;

	public:
		Application() {}
		~Application() {}

	public:
		bool IsPlaying(void);
		void Exit(void);

		void OnStart(void);
		void OnUpdate(void);
		void OnDestroy(void);
	};
}