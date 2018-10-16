CC = g++

OBJ =./build
SRC =./src
BIN =./bin
INC =./include
PROG = $(BIN)/teste
CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJS = $(OBJ)/pessoa.o $(OBJ)/carro.o $(OBJ)/veiculo.o $(OBJ)/main.o 


all: mkdir $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS) 


$(OBJ)/pessoa.o: $(SRC)/pessoa.cpp $(INC)/pessoa.h
	$(CC) $(CPPFLAGS) -c $(SRC)/pessoa.cpp -o $(OBJ)/pessoa.o


$(OBJ)/carro.o: $(SRC)/carro.cpp $(INC)/carro.h  $(SRC)/pessoa.cpp $(INC)/pessoa.h $(SRC)/veiculo.cpp $(INC)/veiculo.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/carro.cpp -o $(OBJ)/carro.o

$(OBJ)/veiculo.o: $(SRC)/veiculo.cpp $(INC)/veiculo.h  $(SRC)/pessoa.cpp $(INC)/pessoa.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/veiculo.cpp -o $(OBJ)/veiculo.o

$(OBJ)/main.o: $(SRC)/main.cpp $(SRC)/pessoa.cpp $(INC)/pessoa.h $(SRC)/veiculo.cpp $(INC)/veiculo.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*

mkdir:
	mkdir -p $(BIN)
	mkdir -p $(OBJ)		

run: 
	$(BIN)/teste	