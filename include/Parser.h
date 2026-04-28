#pragma once
#include <string>
#include <vector>

//========================
//
//  Separar label, inst e operandos
//  Trata de LABEL: e COPY A,B
//========================


struct Line {
    std::string label;
    std::string opcode;
    std::vector<std::string> operands;
};

Line parseLine(const std::string& line);