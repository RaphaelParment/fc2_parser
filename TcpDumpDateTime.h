/*
 * TcpDumpDateTime.h
 *
 *  Created on: Mar 18, 2017
 *      Author: raphish
 */

#ifndef TCPDUMPDATETIME_H_
#define TCPDUMPDATETIME_H_

class TcpDumpDateTime
{
private:
	int hour;
	int minute;
	int second;
	int microsecond;

public:
	TcpDumpDateTime();
	TcpDumpDateTime(string tcpDumpDateTimeString);
	TcpDumpDateTime(int hour, int minute, int second, int microseconds);

	void display();


	int getHour() const {
		return hour;
	}

	void setHour(int hour) {
		this->hour = hour;
	}

	int getMicrosecond() const {
		return microsecond;
	}

	void setMicrosecond(int microsecond) {
		this->microsecond = microsecond;
	}

	int getMinute() const {
		return minute;
	}

	void setMinute(int minute) {
		this->minute = minute;
	}

	int getSecond() const {
		return second;
	}

	void setSecond(int second) {
		this->second = second;
	}
};



#endif /* TCPDUMPDATETIME_H_ */
