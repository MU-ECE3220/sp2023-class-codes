CXXFLAGS := -std=c++11 -Wall -O0

LD := g++

SOURCES := $(wildcard *.cpp)
OBJS := $(SOURCES:%.cpp=%.o)

LIBS =

TARGET := main
.PHONY : all
all : $(TARGET)

$(TARGET) : $(OBJS)
	 $(LD) $(CXXFLAGS) $^ -o $@ 

.PHONY : clean
clean : 
	rm -rf $(TARGET) $(OBJS)