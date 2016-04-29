result:main calculator
	gcc main.o calculator.o -o result

main: main_clean main.c
	gcc -c -O0 main.c
main_optimize: main_clean main.c
	gcc -c -O2 main.c
main_clean:
	if [ -e main.o ] ; then rm main.o ; fi
	
calculator: calculator_clean calculator.c
	gcc -c -O0 calculator.c
calculator_optimize: calculator_clean calculator.c
	gcc -c -O2 calculator.c
calculator_clean:
	if [ -e calculator.o ] ; then rm calculator.o ; fi

	

release: main_optimize calculator_optimize
	gcc main.o calculator.o -o release

diff: result release
	./result
	./release

clean:
	if [ -e result ] ; then rm result ; fi

	if [ -e release ] ; then rm release ; fi

	rm *.o

