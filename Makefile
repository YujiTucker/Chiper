#Date		:15/Aug/2015
#Author	:Tomofumi Tasaka
#
#TARGETNAME: dependent file1, ...

OBJS = \
	main.o \
	Vigenere.o

CPPFLAGS = g++

EXEFILE = vigenere

.SUFFIXES: .cpp .o

.cpp.o:
	$(CPPFLAGS) -c $<

.PHONY: all
all: vigenere

$(EXEFILE): $(OBJS)
	$(CPPFLAGS) -o $@ $(OBJS)

.PHONY: clean
clean:
	rm -f $(OBJS)

