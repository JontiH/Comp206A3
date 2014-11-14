# Wedit Makefile for project a3q1
SRCDIR=c:\users\jonti\documents\github\comp206a3
CFLAGS=-I"c:\lcc\include" -I"C:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	a3q1.obj

LIBS=
EXE=a3q1.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\a3q1.exe $(OBJS) $(LIBS)

# Build a3q1.c
A3Q1_C=\

a3q1.obj: $(A3Q1_C) $(SRCDIR)\a3q1.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\a3q1.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\a3q1.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) a3q1.exe
