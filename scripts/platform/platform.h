#pragma once

#include<memory>
#include<string>
#include "win/win_app.h"
#include "win/win_app.cpp"
#include "../util/convert_util.h"
#include "../util/convert_util.cpp"

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
		std::shared_ptr<WinApp> winApp;

	public:
		Platform() {}
		~Platform() {}
	
	public:
		void LoadWindow(string title, int w, int h);
		void HandleInput(KEY_CODE code, int state);
	};
}
