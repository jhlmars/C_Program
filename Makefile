# Makefile
CC = gcc
OBJS = Hello.o
TARGET = Hello.exe

.SUFFIXES : .c .o
all : $(TARGET)
$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

clean : 
	rm -f $(OBJS) $(TARGET)

