#ifndef _DEBUG_H_
#define _DEBUG_H_

#include <iostream>
#include <string>

#include "windows.h"

using string = std::string;

namespace u2 {
	enum LogLv {
		Log,
		Warning,
		Error,
	};

	class Debug
	{
	private:
		static void Print(string msg, LogLv lv);

	public:
		Debug() {}
		~Debug() {}

	public:
		static void Log(string msg);
		static void Warning(string msg);
		static void Error(string msg);
	};
}
#endif // !_DEBUG_H_