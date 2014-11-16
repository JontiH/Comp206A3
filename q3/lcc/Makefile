# Wedit Makefile for project a3q3
SRCDIR=c:\users\jonti\documents\github\comp206a3\q3
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	a3q3.obj

LIBS=
EXE=a3q3.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\a3q3.exe $(OBJS) $(LIBS)

# Build a3q3.c
A3Q3_C=\

a3q3.obj: $(A3Q3_C) $(SRCDIR)\a3q3.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\a3q3.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\a3q3.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) a3q3.exe
