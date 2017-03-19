/*
 * MessageHeader.cpp
 *
 *  Created on: Mar 18, 2017
 *      Author: raphish
 */


#include "MessageHeader.h"


void MessageHeader::parseHeader(string header)
{
	vector<string> vals = Services::splitString(header, ' ');

	for(vector<string>::iterator it = vals.begin(); it != vals.end(); ++it)
	{
		cout << *it << endl;
	}

}
