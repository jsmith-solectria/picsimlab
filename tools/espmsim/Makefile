include ../../Makefile.conf

CC = g++

prefix=/usr

RM= rm -f
CP= cp
MKDIR = mkdir -p

appdir= ${prefix}/share/applications/
execdir= ${prefix}/bin/
sharedir= ${prefix}/share/picsimlab/

#lxrad automatic generated block start, don't edit below!

FLAGS = -D_VERSION_=\"$(VERSION)\" -D_SHARE_=\"${sharedir}\" -Wall -O2 -DLINUX `lxrad-config --cxxflags`

LIBS = `lxrad-config --libs`  

OBJS = pespmsim.o espmsim1.o espmsim2.o serial.o tcp.o

#lxrad automatic generated block end, don't edit above!


all: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -oespmsim $(LIBS)

%.o: %.cc
	$(CC) -c $(FLAGS) $< 

run: all
	./espmsim

install: all
	$(CP) -dvf  ../../share/espmsim.desktop ${appdir} 
	$(CP) -dvf espmsim ${execdir}

uninstall:
	$(RM) -dvf ${execdir}espmsim
	$(RM) -dvf ${appdir}espmsim.desktop

clean:
	rm -f espmsim *.o core
