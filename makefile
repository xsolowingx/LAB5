#Algumas variaveis sao usadas com significado especial:
#$@ nome do alvo (target)
#$^ lista com os nomes de todos os pre-requisitos sem duplicatas
#$< nome do primeiro pre-requisito
# Comandos do sistema operacional
# Linux: rm -rf
# Windows: cmd //C del
RM = rm -rf
#variáveis de compilação.
CC = g++
CFLAGS = -W -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)/questao1 -I$(INC_DIR)/questao2 -I$(INC_DIR)/questao3
# -I$(INC_DIR)/questao2 -I$(INC_DIR)/questao3
#variáveis de diretórios.
INC_DIR = ./include
BIN_DIR = ./bin
SRC_DIR = ./src
OBJ_DIR = ./build
DOC_DIR = ./doc
#variáveis objetos.
OBJETO1 = $(OBJ_DIR)/questao1/main1.o
OBJETO2 = $(OBJ_DIR)/questao2/main2.o
OBJETO3 = $(OBJ_DIR)/questao3/main3.o
#variáveis .h
ARQ_H1 = $(INC_DIR)/questao1/closest2mean.h 
ARQ_H2 = $(INC_DIR)/questao2/print_elements.h
ARQ_H3 = $(INC_DIR)/questao3/mostraprimo.h

#Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean distclean doxy

all:	questao1 questao2 questao3

questao1:	$(OBJETO1)	
	@echo "====================="
	@echo "Ligando o alvo $@"
	@echo "=========*-*========="
	$(CC) $(CFLAGS) $^ -o $(BIN_DIR)/$@ 
	@echo "+++ [Executavel $@ criado em $(BIN_DIR)] +++"
	@echo "=========*-*========="

$(OBJ_DIR)/questao1/main1.o:	$(SRC_DIR)/questao1/main1.cpp $(ARQ_H1)
	$(CC) -c $(CFLAGS) $< -o $@

questao2:	$(OBJETO2)	
	@echo "====================="
	@echo "Ligando o alvo $@"
	@echo "=========*-*========="
	$(CC) $(CFLAGS) $^ -o $(BIN_DIR)/$@ 
	@echo "+++ [Executavel $@ criado em $(BIN_DIR)] +++"
	@echo "=========*-*========="

$(OBJ_DIR)/questao2/main2.o:	$(SRC_DIR)/questao2/main2.cpp $(ARQ_H2)
	$(CC) -c $(CFLAGS) $< -o $@	

questao3:	$(OBJETO3)	
	@echo "====================="
	@echo "Ligando o alvo $@"
	@echo "=========*-*========="
	$(CC) $(CFLAGS) $^ -o $(BIN_DIR)/$@ 
	@echo "+++ [Executavel $@ criado em $(BIN_DIR)] +++"
	@echo "=========*-*========="

$(OBJ_DIR)/questao3/main3.o:	$(SRC_DIR)/questao3/main3.cpp $(ARQ_H3)
	$(CC) -c $(CFLAGS) $< -o $@	
