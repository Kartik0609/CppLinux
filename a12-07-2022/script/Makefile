CC= g++
CPPFLAGS= -g -Wall -Werror
LFLAGS= -o
IFLAG= -I$(INC)
OBJ= ./obj
SRC= ./src
BIN= ./bin
INC= ./inc

all: app

app: $(OBJ)/emp.o
	$(CC) $(LFLAG) $(BIN)/emp $(OBJ)/emp.o
	mv app $(BIN)

$(OBJ)/emp.o: $(SRC)/emp.cpp
	$(CC) $(CFLAGS) $(SRC)/emp.cpp -I $(INC)
	mv emp.o $(OBJ)
        	

clean:
	rm -f a.out emp
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/emp
		
