#Date		:15/Aug/2015
#Author	:Tomofumi Tasaka
#
#Update	:15/Aug/2015
#	-同じディレクトリ内に.cppと.hが存在する場合にコンパイルを確認済み

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

