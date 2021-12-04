# Mimic repl.it

CXX=clang++

run: main 
	@./$<

main: 
	@$(CXX) -pthread -std=c++17 -o $@ $@.cpp

clean:
	rm -f main
