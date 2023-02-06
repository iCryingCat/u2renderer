#ifndef _APPLICATION_H_
#define _APPLICATION_H_

#include <memory>

#include "platform/platform.h"
#include "render/render.h"

namespace u2
{
	class Application
	{
	public:
		static bool isRunning;
		static std::shared_ptr<Platform> plat;
		static std::shared_ptr<Render> renderContext;

	public:
		Application() {}
		~Application() {}

		static bool IsRunning(void);
		static void Quit(void);

		void OnStart(void);
		void OnTick(void);
		void OnDestroy(void);
	};
}

#endif // !_APPLICATION_H_