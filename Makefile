CC = g++
CFLAGS = -Wall -std=c++11
SOURCES = $(wildcard *.cpp)
TARGETS = $(SOURCES:.cpp=)

all: $(TARGETS)

%: %.cpp
	$(CC) $(CFLAGS) -o $@ $<
