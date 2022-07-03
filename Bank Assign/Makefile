CC = g++
CPPFLAGS = -c -Wall
LDFLAGS = -lcppunit -lm
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/

all: bankapp

bankapp : $(OBJ)Main.o $(OBJ)User.o $(OBJ)Account.o $(OBJ)Transaction.o
	$(CC) -o bankapp $(OBJ)Main.o $(OBJ)User.o $(OBJ)Account.o $(OBJ)Transaction.o
	mv bankapp $(BIN)
                    

$(OBJ)Main.o: $(SRC)Main.cpp
	$(CC) $(CPPFLAGS) $(SRC)Main.cpp -I $(INCLUDE)
	mv Main.o $(OBJ)	

$(OBJ)User.o: $(SRC)User.cpp
	$(CC) $(CPPFLAGS) $(SRC)User.cpp -I $(INCLUDE)
	mv User.o $(OBJ)	

$(OBJ)Account.o: $(SRC)Account.cpp
	$(CC) $(CPPFLAGS) $(SRC)Account.cpp -I $(INCLUDE)
	mv Account.o $(OBJ)


$(OBJ)Transaction.o: $(SRC)Transaction.cpp
	$(CC) $(CPPFLAGS) $(SRC)Transaction.cpp -I $(INCLUDE)
	mv Transaction.o $(OBJ)



clean:
	rm -f  bankapp *.o
	rm -f $(OBJ)*.o
	rm -f $(BIN)bankapp
			
