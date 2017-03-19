/*
 * MessageHeader.h
 *
 *  Created on: Mar 18, 2017
 *      Author: raphish
 */

#include "common_includes.h"


#ifndef MESSAGEHEADER_H_
#define MESSAGEHEADER_H_


class MessageHeader
{
private:
	int tos; // hex
	int ttl;
	int id;
	int offset;
	string flags;
	string protocol;
	int length;
	
	void parseHeader(string header);

public:
	MessageHeader();



	const string& getFlags() const {
		return flags;
	}

	void setFlags(const string& flags) {
		this->flags = flags;
	}

	int getId() const {
		return id;
	}

	void setId(int id) {
		this->id = id;
	}

	int getLength() const {
		return length;
	}

	void setLength(int length) {
		this->length = length;
	}

	int getOffset() const {
		return offset;
	}

	void setOffset(int offset) {
		this->offset = offset;
	}

	const string& getProtocol() const {
		return protocol;
	}

	void setProtocol(const string& protocol) {
		this->protocol = protocol;
	}

	int getTos() const {
		return tos;
	}

	void setTos(int tos) {
		this->tos = tos;
	}

	int getTtl() const {
		return ttl;
	}

	void setTtl(int ttl) {
		this->ttl = ttl;
	}
};


#endif /* MESSAGEHEADER_H_ */
