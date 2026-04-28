#pragma once
#include <string>
#include <unordered_map>
#include <vector>

//========================
//  Tradução do opcode
//  Geração do .pen e .obj
//  Tabela de simbolos
//  Resolver Pendencias
//========================


class Assembler {
    private:
        std::unordered_map<std::string, int> symbolTable;
        std::unordered_map<std::string, std::vector<int>> pending;
        std::vector<int> code;

    public:
        void assemble(const std::string& preFile);
};
