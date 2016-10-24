
CXXFLAGS = -Wall -Wextra -std=c++11

RECIPE = $(LINK.cc) $^ -o $@

default: ends

ends: ends.o
	$(RECIPE)

clean:
	rm *.o
	rm ends

make_run: default run

run:
	echo Running ends
	./ends

