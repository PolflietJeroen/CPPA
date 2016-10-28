
CXXFLAGS = -Wall -Wextra -std=c++11

RECIPE = $(LINK.cc) $^ -o $@

default: Scope RatioPrinter #ScopeDurationBasic

Scope: ScopeDurationBasic.o Scope.o
	$(RECIPE)

RatioPrinter: RatioPrinter.o
	$(RECIPE)

ScopeDurationBasic: ScopeDurationBasic.cpp
	$(RECIPE)

Scope.o: Scope.cpp ScopeDurationBasic.hpp

ScopeDurationBasic.o: ScopeDurationBasic.hpp ScopeDurationBasic.cpp

clean:
	rm -f *.o
	rm -f Scope 
	rm -f RatioPrinter 
	rm -f ScopeDurationBasic 

make_clean_run: clean default run

make_clean: clean default

make_run: default run

run:
	echo Running RatioPrinter
	./RatioPrinter
	echo Running Scope
	./Scope

