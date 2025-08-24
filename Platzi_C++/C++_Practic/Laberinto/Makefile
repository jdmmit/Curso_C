CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
INCLUDES = -Iinclude
SRCDIR = src
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
TARGET = laberinto

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ $^

clean:
	rm -f $(TARGET)

.PHONY: all clean