#ifndef _PLATFORM_H_
#define _PLATFORM_H_

#include <memory>
#include <string>
#include "win/win_app.h"

using string = std::string;

namespace u2
{
	enum KEY_CODE {
		W,
		A,
		S,
		D
	};

	class Platform
	{
	private:
		std::shared_ptr<WinApp> winApp = std::make_shared<WinApp>();

	public:
		Platform() {}
		~Platform() {}

		void DisplayWindow(string title, int w, int h);
		void HandleInput(KEY_CODE code, int state);
		void OnTick(void);
	};
}
#endif // !_PLATFORM_H_