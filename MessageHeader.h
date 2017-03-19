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
	TcpDumpDateTime headerDateTime;
	int tos; // hex
	int ttl;
	int id;
	int offset;
	string flags;
	string protocol;
	int length;
	
	void parseHeader(string header);

public:
	MessageHeader(string header);

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

	const TcpDumpDateTime& getHeaderDateTime() const {
		return headerDateTime;
	}

	void setHeaderDateTime(const TcpDumpDateTime& headerDateTime) {
		this->headerDateTime = headerDateTime;
	}
};


#endif /* MESSAGEHEADER_H_ */
