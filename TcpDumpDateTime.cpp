/*
 * TcpDumpDateTime.cpp
 *
 *  Created on: Mar 18, 2017
 *      Author: raphish
 */

#include "common_includes.h"
#include "TcpDumpDateTime.h"

TcpDumpDateTime::TcpDumpDateTime()
{

}

TcpDumpDateTime::TcpDumpDateTime(int hour, int minute, int second, int microsecond)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
	this->microsecond = microsecond;
}

TcpDumpDateTime::TcpDumpDateTime(string tcpDumpDateTimeString)
{
	this->hour = stoi(tcpDumpDateTimeString.substr(0, 2));
	this->minute = stoi(tcpDumpDateTimeString.substr(3, 5));
	this->second = stoi(tcpDumpDateTimeString.substr(6, 8));
	this->microsecond = stoi(tcpDumpDateTimeString.substr(9, 15));
}

void TcpDumpDateTime::display()
{
	printf("hour: %d\tmin: %d\tsec: %d\tmicrosec: %d\n",
			this->hour,
			this->minute,
			this->second,
			this->microsecond);
}

