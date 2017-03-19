/*
 * Services.h
 *
 *  Created on: Mar 18, 2017
 *      Author: raphish
 */

#include <iostream>
#include <string>
#include <vector>

#ifndef SERVICES_H_
#define SERVICES_H_

class Services
{
public:
	static vector<string> splitString(string str, char delimiter);
	static bool isTcpDumpDateTime(string startOfLine, int size);
	static string getFirstXChars(string input, int x);
	static vector<string> parseHeader(string header);
	static string removeNoisyChars(string s);

	static vector<char> getNoisyChars();
};



#endif /* SERVICES_H_ */
