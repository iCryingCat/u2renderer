#pragma once

#include <Windows.h>
#include <string>
using string = std::string;

class ConvertUtil
{
public:
	static LPCWSTR StringToLPCWSTR(string orig);

};
