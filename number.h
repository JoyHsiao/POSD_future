#ifndef NUMBER_H
#define NUMBER_H

#include <string>
#include "term.h"

class Number : public Term{
public:
    Number(double db):Term(db) {}
};

#endif
