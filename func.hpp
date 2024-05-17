#pragma once

#include <iostream>
#include <fstream>
#include <ctime>
#include <string>


namespace sd
{
	void FormatedTime(char string[], char newform[], size_t lenght);
	int Lines(const char& file_name);
}