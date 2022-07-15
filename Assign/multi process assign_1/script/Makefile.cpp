CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: app

app: $(OBJ)/pid.o
	$(CC) $(LFLAGS) $(BIN)/pid $(OBJ)/pid.o

$(OBJ)/pid.o: $(SRC)/pid.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/pid.cpp 
	mv *.o $(OBJ)



clean:
	@echo "Cleaning is in Progress"
	rm -f a.out pid
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/pid
	@echo "Done!"