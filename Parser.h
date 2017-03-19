/*
 * Parser.h
 *
 *  Created on: Mar 11, 2017
 *      Author: raphish
 */

#ifndef PARSER_H_
#define PARSER_H_

#include "common_includes.h"
#include "Message.h"

class Parser
{
private:
	vector<Message> messages;
	vector<Message> readfile(string filename);
	vector<Message> getMessages();

public:
	Parser();
	Parser(string filename);
};


#endif /* PARSER_H_ */
