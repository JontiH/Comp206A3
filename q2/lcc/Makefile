# Wedit Makefile for project a3q2
SRCDIR=c:\users\jonti\documents\github\comp206a3\q2
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	a3q2.obj

LIBS=
EXE=a3q2.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\a3q2.exe $(OBJS) $(LIBS)

# Build a3q2.c
A3Q2_C=\

a3q2.obj: $(A3Q2_C) $(SRCDIR)\a3q2.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\a3q2.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\a3q2.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) a3q2.exe
