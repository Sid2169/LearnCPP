# ... (Rest of your Makefile)

# Source files - Automatic detection of .cpp files
SOURCES = $(wildcard *.cpp)

# Object files created from source 
OBJECTS = $(SOURCES:.cpp=.o)

# ... (Rest of your Makefile)
