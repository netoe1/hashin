
hashin.o: ./include/hashin.hpp ./src/hashin.cpp
	g++ -c ./src/hashin.cpp -o ./obj/hashin.o


main.o: ./main.cpp
	g++ -o main.o main.cpp ./obj/hashin.o 

clean:
	rm -rf ./*.o