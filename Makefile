CC := gcc
CFLAGS = -g
INCLUDE = -std=c++11 -I.
LIB =
SRCDIR = src
SRCFILES = main.cpp
TARGET = $(addprefix $(SRCDIR)/,$(SRCFILES:.cpp=.o))

.PHONY: all clean format
.SUFFIXES: .c .cpp

# Specify how to compile the .cpp files.
$(SRCDIR)/%.o: %.cpp | $(SRCDIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<

all: $(TARGET)

format:
	clang-format -i $$(find . -name "*.cpp" -or -name "*.h" -print)

clean:
	rm -v $(OBJ) $(TARGET)

$(TARGET): $(OBJ) $(TARGET)
	$(CC) $(CFLAGS) $(INCLUDE) $(TARGET:.o=.cpp) $(OBJ) $(LIB) -o $(TARGET)
