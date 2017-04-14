main: calculate.h calculate.o writefilein.h writefilein.o main.o
	g++ -o main calculate.h calculate.o writefilein.h writefilein.o main.o

main.o: main.cpp calculate.h writefilein.h
	g++ -c main.cpp calculate.h writefilein.h 

calculate.o: calculate.cpp calculate.h
	g++ -c calculate.cpp calculate.h

writefilein.o: writefilein.cpp writefilein.h
	g++ -c writefilein.cpp writefilein.h
  
clean:
	rm main *.o
	
