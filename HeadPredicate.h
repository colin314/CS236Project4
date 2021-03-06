#pragma once

#include "Token.h"
#include <vector>
#include <string>
#include <sstream>

class HeadPredicate{
public:
    HeadPredicate(const Token& id) {
        predID = new Token(id);
    }
    ~HeadPredicate() {
        delete predID;
        for (size_t i = 0; i < idList.size(); i++) {
            delete idList.at(i);
        }
    }

    std::vector<Token*>* getIdList() {
        return &idList;
    }

    std::string toString();

private:
    Token* predID;
    std::vector<Token*> idList;
};