#include "Settings.h"

SettingsFile::SettingsFile()
{
	std::ifstream Settings_File("Settings.txt");

	
	char c;
	bool state = Settings_File.good();
	if (Settings_File.fail())
	{
		int m;
	}
	while (Settings_File >> c)
	{
		Settings.push_back(c);
	}
	Extract_data("width", width);
	Extract_data("height", height);
	Extract_data("size", dimension);
	Extract_data("poison", poison_count);
	Extract_data("goals", goals_count);
	Extract_data("rate", speedup_rate);

	
	
}

void SettingsFile::Extract_data(std::string data, int& data_container)
{
	int start, offset, word_size;
	
	int data_name_size = data.size();
	start = (Settings.find(data, 0) + data_name_size );
	offset = Settings.find_first_of(".", start);
	word_size = offset - start;
	data_container = std::stoi(Settings.substr(start, word_size));
}
void SettingsFile::Extract_data(std::string data, float& data_container)
{
	int start, offset, word_size;

	int data_name_size = data.size();
	start = (Settings.find(data, 0) + data_name_size);
	offset = Settings.find_first_of("f", start);
	word_size = (offset - start)+1;
	data_container = std::stof(Settings.substr(start, word_size));
}
