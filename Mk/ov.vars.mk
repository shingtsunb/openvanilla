
RM=/bin/rm -f
MKDIR=/bin/mkdir -p

INST_PATH=/Library/OpenVanilla/Development

CFLAGS=-O2 -Wall

GCC=/usr/bin/gcc
GPP=/usr/bin/g++

CCACHE=ccache
ifdef USE_CCACHE
CC=$(CCACHE) $(GCC)
CPP=$(CCACHE) $(GPP)
else
CC=$(GCC)
CPP=$(GPP)
endif

