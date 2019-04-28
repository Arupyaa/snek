#pragma once

#include <fstream>
#include <string>

class SettingsFile
{
public:
	SettingsFile();
	int width = 0;
	int height = 0;
private:
	std::string Settings;
	void Extract_data(std::string data, int& data_container);
};

