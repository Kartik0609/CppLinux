CC == g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
SRC = ./src

all: nat

nat: $(OBJ)/nat.o
	$(CC) $(LFLAG) $(BIN)/nat $(OBJ)/nat.o

$(OBJ)/nat.o: $(SRC)/nat.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/nat.cpp
	mv *.o $(OBJ)

clean:
	rm -f a.out nat
	rm-f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/nat

