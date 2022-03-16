#include <iostream>
#include <ifstream>
#include "lex.h"

LexItem getNextToken(std::istream& in) {
    char c;
    std::cout << in.get(c)<< std::endl;
}

int main(int argc, char* argv[]) {
    ifstream src;

    int linenum = 10;
    getNextToken();
    std::cout << "Hello world" << std::endl;
}
