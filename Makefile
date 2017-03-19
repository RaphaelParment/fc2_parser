all: main.o parser.o message.o services.o tcpdumpdatetime.o messageheader.o config.o
	g++ main.o parser.o message.o services.o tcpdumpdatetime.o messageheader.o config.o -o main
	
main.o: main.cpp
	g++ -c main.cpp -o main.o
	
config.o: Config.cpp
	g++ -c Config.cpp -o config.o
	
parser.o: Parser.cpp
	g++ -c Parser.cpp -o parser.o
	
message.o: Message.cpp
	g++ -c Message.cpp -o message.o

messageheader.o: MessageHeader.cpp
	g++ -c MessageHeader.cpp -o messageheader.o
	
services.o: Services.cpp 
	g++ -c Services.cpp -o services.o

tcpdumpdatetime.o: TcpDumpDateTime.cpp
	g++ -c TcpDumpDateTime.cpp -o tcpdumpdatetime.o
	
clean:
	rm -f *.o