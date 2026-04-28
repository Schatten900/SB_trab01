#include "Preprocessor.h"
#include "Assembler.h"
#include "Simulator.h"
#include <string>

int main(int argc, char* argv[]) {
    std::string file = argv[1];

    if (file.find(".asm") != std::string::npos) {
        PreProcess p;
        p.preprocess(file);
    }
    else if (file.find(".pre") != std::string::npos) {
        Assembler a;
        a.assemble(file);
    }
    else if (file.find(".obj") != std::string::npos) {
        Simulator s;
        s.simulate(file);
    }

    return 0;
}