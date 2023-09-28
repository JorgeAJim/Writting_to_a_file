main: main.cpp
	g++ -g main.cpp -o main
clean: output.txt
	rm output.txt
	vim output.txt
run: main
	./main
