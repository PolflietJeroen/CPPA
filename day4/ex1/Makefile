CC			= g++
CFLAGS		= -c -Wall -Werror -std=c++11
LDFLAGS		= -lpthread
SOURCES		= main.cpp thread.cpp
INCLUDES	= -I../threads
OBJECTS		= $(SOURCES:.cpp=.o)
TARGET		= wqueue

all: $(SOURCES) $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@

clean:
	rm -rf $(OBJECTS) $(TARGET)

make_clean_run: clean all run

make_clean: clean all

make_run: all run

run:
	echo Running $(TARGET)
	./$(TARGET) 3
