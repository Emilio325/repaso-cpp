programa.exe: main.o punto.o
	g++	main.o punto.o -o programa.exe

main.o: main.cpp punto.h
	g++	-std=c++17 -Wall -Wextra -g -c main.cpp

punto.o: punto.cpp punto.h
	g++	-std=c++17 -Wall -Wextra -g -c punto.cpp

clean:
	"C:\Windows\System32\WindowsPowerShell\v1.0\powershell.exe" -NoProfile -Command "Remove-Item main.o,punto.o,programa.exe -Force -ErrorAction SilentlyContinue"