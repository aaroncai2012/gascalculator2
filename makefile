
calculator: source.cc		\
		calculator.cc		\
		interface.cc
	g++ -std=c++11 $^ -o calculator.exe

clean:
	rm *.exe
