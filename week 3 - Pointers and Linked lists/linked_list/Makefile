CFLAGS := -Wall -O0

LD := gcc

SOURCES := $(wildcard *.c)
OBJS := $(SOURCES:%.c=%.o)

LIBS =

TARGET := main
.PHONY : all
all : $(TARGET)

$(TARGET) : $(OBJS)
	 $(LD) $(CFLAGS) $^ -o $@ 

.PHONY : clean
clean : 
	rm -rf $(TARGET) $(OBJS)