#pragma once

#include <fstream>
#include <string>

class SettingsFile
{
public:
	SettingsFile();
	int width = 0;
	int height = 0;
	int dimension = 0;
	int goals_count = 0;
	int poison_count = 0;
	float speedup_rate = 0.0f;
private:
	std::string Settings;
	void Extract_data(std::string data, int& data_container);
	void Extract_data(std::string data, float& data_container);
};

