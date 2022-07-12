CC = g++
CPPFLAGS = -c -Wall
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/

all: app

app:$(OBJ)emp.o
	$(CC) -o app $(OBJ)emp.o 
	mv app $(BIN) 

$(OBJ)emp.o: $(SRC)emp.cpp
	$(CC) $(CPPFLAGS) $(SRC)emp.cpp -I $(INCLUDE)
	mv emp.o $(OBJ)

clean:
	rm -f a.out app *.o
	rm -f $(OBJ)*.o
	rm -f $(BIN)app
