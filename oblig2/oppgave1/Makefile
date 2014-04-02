OUTPUT = fireworks
FOLDER = .

CC = g++ -ggdb3 -Og -std=c++11
LFLAGS = `fltk-config --ldflags`
CFLAGS = -c -Wall -Wextra -pedantic `fltk-config --cflags`

CMODS = $(wildcard $(FOLDER)/*.cpp)
COBJS = $(CMODS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) $< -o $@

all: $(COBJS)
	$(CC) $(COBJS) $(LFLAGS) -o $(OUTPUT)

clean:
	$(RM) $(COBJS) $(OUTPUT)
#all:
#	g++ -std=c++11 fltk1.cpp -o fltk1 -L/usr/local/lib -lfltk -lm