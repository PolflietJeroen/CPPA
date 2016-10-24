
CXXFLAGS = -Wall -Wextra -std=c++11

RECIPE = $(LINK.cc) $^ -o $@

default: main

main: main.o
	$(RECIPE)

clean:
	rm *.o
	rm main

make_run: default run

run:
	echo Running main
	./main

