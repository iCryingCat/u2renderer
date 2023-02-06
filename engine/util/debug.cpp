#include "debug.h"

namespace u2 {
	void Debug::Print(string msg, LogLv lv)
	{
		switch (lv) {
		case  LogLv::Log:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			break;
		case  LogLv::Warning:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
				FOREGROUND_GREEN);
			break;
		case  LogLv::Error:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			break;
		}
		std::cout << msg << std::endl;
	}

	void Debug::Log(string msg)
	{
		Debug::Print(msg, LogLv::Log);
	}

	void Debug::Warning(string msg)
	{
		Debug::Print(msg, LogLv::Warning);
	}

	void Debug::Error(string msg)
	{
		Debug::Print(msg, LogLv::Error);
	}
}
