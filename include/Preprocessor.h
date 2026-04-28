#pragma once
#include <unordered_map>
#include <string>
#include <vector>

//===============================
//  Responsável por criar o .pre
//===============================

class PreProcess{
    private:
        std::unordered_map<std::string, int> equTable;

        // Remove tudo após ';'
        std::string removeComments(const std::string& line);

        // Normaliza (maiúsculo + remove espaços extras)
        std::string normalize(const std::string& line);

        // Substitui símbolos definidos em EQU pelos valores
        std::string replaceEqu(const std::string& line);

        // Verifica se a linha contém diretiva EQU
        bool isEquLine(const std::string& line);

        // Verifica se a linha é um IF
        bool isIfLine(const std::string& line);

        // Extrai o valor do IF (já após substituição de EQU)
        int extractIfValue(const std::string& line);

        // Armazena todas as linhas do arquivo
        std::vector<std::string> lines;

        // Armazena a seção .text
        std::vector<std::string> textSection;

        // Armazena a seção .data
        std::vector<std::string> dataSection;

    public:
        // Executa todo o pré-processamento (.asm → .pre)
        void preprocess(const std::string& inputFile);
};