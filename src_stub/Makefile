
LIB_FILE = libdtvapi.so
LIB_DIR  = ../lib
INC_DIR  = ../inc

CFLAGS += -g -O2 -shared -fPIC -std=c99 -I$(INC_DIR)

all: dtvobj
	
dtvobj:
	$(CC) $(CFLAGS) $(wildcard *.c) -o $(LIB_DIR)/$(LIB_FILE)
	
clean:
	@find -name *.o -exec rm -f {} \;
	rm -f $(LIB_DIR)/$(LIB_FILE)

