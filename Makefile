CC := gcc
CFLAGS = -g
INCLUDE = -std=c++11 -I.
LIB =
SRCDIR = src
SRCFILES = main.cpp
TARGET = $(addprefix $(SRCDIR)/,$(SRCFILES:.cpp=.o))

.PHONY: all clean
.SUFFIXES: .c .cpp

# Specify how to compile the .cpp files.
$(SRCDIR)/%.o: %.cpp | $(SRCDIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<

all: $(TARGET)

clean:
	echo rm -v $(OBJ) $(TARGET).o $(TARGET)

$(TARGET): $(OBJ) $(TARGET)
	$(CC) $(CFLAGS) $(INCLUDE) $(TARGET:.o=.cpp) $(OBJ) $(LIB) -o $(TARGET)
