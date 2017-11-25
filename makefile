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
CFLAGS = -W -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)
DYNAMIC = -fPIC
#variáveis de diretórios.
INC_DIR = ./include
BIN_DIR = ./bin
SRC_DIR = ./src
OBJ_DIR = ./build
DOC_DIR = ./doc
LIB_DIR = ./lib
#variável objeto
OBJETO_EST = $(OBJ_DIR)/mainEST.o $(OBJ_DIR)/funcoesEST.o
OBJETO_DYN = $(OBJ_DIR)/mainDYN.o $(OBJ_DIR)/funcoesDYN.o

#Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean distclean doxy

#make para fazer as duas bibliotecas para linux
linux:	linux_estatico linux_dinamico

#faz a biblioteca estática para linux
linux_estatico:	libMatheusJ.a 

#faz a biblioteca dinâmica para linux
linux_dinamico:	libMatheusJ.so 

#make para fazer tudo
all: linux windows

#make para fazer as duas bibliotecas para windows
windows:	windows_estatico windows_dinamico

#faz o programa para windows com a biblioteca estática
windows_estatico:	libMatheusJ.lib

#faz o programa para windows com a biblioteca dinâmica
windows_dinamico:	libMatheusJ.dll

#bibliotecas estáticas
libMatheusJ.a:	Target_biblioteca_estatica
	ar rcs $(LIB_DIR)/$@ $(OBJ_DIR)/matheusJEST.o
	@echo "====================="
	@echo "Ligando o alvo $@"
	@echo "=========*-*========="
	@echo "+++ [Biblioteca estatica libMatheusJ.a criada em $(LIB_DIR)] +++"
	@echo "=========*-*=========" 

libMatheusJ.lib:	Target_biblioteca_estatica
	ar rcs $(LIB_DIR)/$@ $(OBJ_DIR)/matheusJEST.o
	@echo "====================="
	@echo "Ligando o alvo $@"
	@echo "=========*-*========="
	@echo "+++ [Biblioteca estatica libMatheusJ.lib criada em $(LIB_DIR)] +++"
	@echo "=========*-*=========" 

#bibliotecas dinâmicas
libMatheusJ.so:	Target_biblioteca_dinamica
	$(CC) -shared $(DYNAMIC) -o $(LIB_DIR)/$@ $(OBJ_DIR)/matheusJDYN.o
	@echo "====================="
	@echo "Ligando o alvo $@"
	@echo "=========*-*========="
	@echo "+++ [Biblioteca dinamica libMatheusJ.so criada em $(LIB_DIR)] +++"
	@echo "=========*-*========="

libMatheusJ.dll:	Target_biblioteca_dinamica
	$(CC) -shared $(DYNAMIC) -o $(LIB_DIR)/$@ $(OBJ_DIR)/matheusJDYN.o
	@echo "====================="
	@echo "Ligando o alvo $@"
	@echo "=========*-*========="
	@echo "+++ [Biblioteca dinamica libMatheusJ.dll criada em $(LIB_DIR)] +++"
	@echo "=========*-*========="  

#target para biblioteca dinamica
Target_biblioteca_dinamica:	$(SRC_DIR)/matheusJ.cpp
	$(CC) -c $(DYNAMIC) $(CFLAGS) $< -o $(OBJ_DIR)/matheusJDYN.o

#target para biblioteca estática
Target_biblioteca_estatica:	$(SRC_DIR)/matheusJ.cpp
	$(CC) -c $(CFLAGS) $< -o $(OBJ_DIR)/matheusJEST.o
