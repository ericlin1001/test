all:compile run
run:prun

compile:test.cpp
	g++ -o test test.cpp
prun:test
	./test
	

clean:
	rm test
