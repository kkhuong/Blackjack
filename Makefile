CXX=g++
CXXFLAGS=-g -Wall -MMD -std=c++0x
#LDLIBS=-lm # list libs here
output: main.o Game.o Shoe.o Hand.o
clean:
	$(RM) *.o *.d output
-include $(wildcard *.d)