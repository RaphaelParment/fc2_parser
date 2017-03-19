all: main.o parser.o message.o services.o tcpdumpdatetime.o
	g++ main.o parser.o message.o services.o tcpdumpdatetime.o -o main
	
main.o: main.cpp
	g++ -c main.cpp -o main.o
	
parser.o: Parser.cpp
	g++ -c Parser.cpp -o parser.o
	
message.o: Message.cpp
	g++ -c Message.cpp -o message.o
	
services.o: Services.cpp
	g++ -c Services.cpp -o services.o

tcpdumpdatetime.o: TcpDumpDateTime.cpp
	g++ -c TcpDumpDateTime.cpp -o tcpdumpdatetime.o
	
clean:
	rm -f *.o