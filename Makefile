# Mimic repl.it

CXX=clang++

run: compile 
	./main

compile:
	$(CXX) -pthread -std=c++17 -o main main.cpp

clean:
	rm -f main
