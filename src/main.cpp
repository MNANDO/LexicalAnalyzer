#include <iostream> 
#include <fstream>
#include <string>
#include "lex.h"

LexItem getNextToken(istream& in, int& linenum) {
    enum TokenState { START, INID, INSTRING, ININT, INREAL, INCOMMENT };
    TokenState lexstate = START;
    char c;
    while (in.get(c)) {
        switch (lexstate) {
            // control for the start of the token
            case START:
                if (c == '\n') linenum++;

                if (isspace(c)) continue;
            // control if the current token is inside of an ID
        }
    }
}

int main(int argc, char* argv[]) {
    std::ifstream source(argv[1]);
    std::string line;
    // the first argument in argv will represent the source code file name

    if (source.is_open()) {
        int linenum = 0;
        std::cout << "The file is open." << std::endl;
        getNextToken(source, linenum);
        source.close();
        std::cout << linenum << std::endl;
    } else {
        std::cout << "ERROR: Failed to open file" << std::endl;
    }


    return 0;
}
