# Mimic repl.it

CXX=clang++

run: main 
	@./$<

main: main.cpp insertion.hpp
	@$(CXX) -pthread -std=c++17 -o $@ $<

clean:
	rm -f main
