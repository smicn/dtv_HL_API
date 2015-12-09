DTVOBJS = $(patsubst %.c,%.o,$(wildcard *.c))

LIB_FILE = libdtvapi.so
LIB_DIR = ../lib
INC_DIR = ../inc

all: 	dtvobj srclib

dtvobj:	$(DTVOBJS)

srclib:
	$(CC) -shared -fPIC -o -I$(INC_DIR) $(LIB_DIR)/$(LIB_FILE) *.o 
	
clean:
	@find -name *.o -exec rm -f {} \;
	rm -f $(LIB_DIR)/$(LIB_FILE)

