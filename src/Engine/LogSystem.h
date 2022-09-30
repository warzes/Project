#pragma once


struct LogCreateInfo
{
	const char* FileName = "../Log.txt";
};

class LogSystem
{
public:
	bool Create(const LogCreateInfo& createInfo);
	void Destroy();

	void PrintLog(const std::string& str);
	void ErrorLog(const std::string& str);
};

extern LogSystem gLogSystem;