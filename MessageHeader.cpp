/*
 * MessageHeader.cpp
 *
 *  Created on: Mar 18, 2017
 *      Author: raphish
 */

#include "common_includes.h"
#include "MessageHeader.h"

MessageHeader::MessageHeader(string header)
{
	Services::parseHeader(header);
}

void MessageHeader::parseHeader(string header)
{
	vector<string> vals = Services::splitString(header, ' ');

	for(vector<string>::iterator it = vals.begin(); it != vals.end(); ++it)
	{
		cout << *it << endl;
	}

}
