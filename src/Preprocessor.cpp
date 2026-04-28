#include "Preprocessor.h"

// Remove tudo após ';'
std::string PreProcess::removeComments(const std::string& line){

}

// Normaliza (maiúsculo + remove espaços extras)
std::string PreProcess::normalize(const std::string& line){

}

// Substitui símbolos definidos em EQU pelos valores
std::string PreProcess::replaceEqu(const std::string& line){

}

// Verifica se a linha contém diretiva EQU
bool PreProcess::isEquLine(const std::string& line){

}

// Verifica se a linha é um IF
bool PreProcess::isIfLine(const std::string& line){

}

// Extrai o valor do IF (já após substituição de EQU)
int PreProcess::extractIfValue(const std::string& line){

}

// Executa todo o pré-processamento (.asm → .pre)
void PreProcess::preprocess(const std::string& inputFile){

}
