/*
 * Services.cpp
 *
 *  Created on: Mar 18, 2017
 *      Author: raphish
 */

#include "common_includes.h"
#include "Services.h"
#include "TcpDumpDateTime.h"


vector<string> Services::splitString(string str, char delimiter)
{
	vector<string> splitString;
	std::stringstream ss(str);
	string temp;

	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] == delimiter)
		{
			str[i] = ' ';
		}
	}
	while(ss >> temp)
	{
		splitString.push_back(temp);
	}

	return splitString;
}

bool Services::isTcpDumpDateTime(string startOfLine, int size)
{
	for(int i = 0; i < size; i++)
	{
		if(i == 2 || i == 5)
		{
			if(!startOfLine[i] == ':')
			{
				return false;
			}
		}
		else if(i == 8)
		{
			if(!startOfLine[i] == '.')
			{
				return false;
			}
		}
		else
		{
			if(!isdigit(startOfLine[i]))
			{
				return false;
			}
		}
	}

	return true;
}

string Services::getFirstXChars(string input, int x)
{
	string firstXChars;

	// return empty string if the line is shorter that x characters
	if(x > input.length())
	{
		return "";
	}

	firstXChars.assign(input, 0, x);

	return firstXChars;
}



