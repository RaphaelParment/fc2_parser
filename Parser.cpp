/*
 * Parser.cpp
 *
 *  Created on: Mar 11, 2017
 *      Author: raphish
 */

#include <fstream>
#include "Parser.h"
#include "Services.h"
#include "TcpDumpDateTime.h"

Parser::Parser()
{
	cout << "creating parser object" << endl;
}

Parser::Parser(string filename)
{
	this->messages = this->readfile(filename);
}

vector<Message> Parser::getMessages()
{
	return this->messages;
}

vector<Message> Parser::readfile(string filename)
{
	string message;
	string firstXChars;
	vector<Message> messages;
	ifstream input(filename);

	if(input.is_open())
	{
		while(getline(input, message))
		{
			firstXChars = Services::getFirstXChars(message, 15);
			if(Services::isTcpDumpDateTime(firstXChars, 15))
			{
				// Begining of a message
				MessageHeader messageHeader(message);

			}
		}
	}
	else
	{
		cout << filename << " cannot be read" << endl;
	}



	return messages;
}



