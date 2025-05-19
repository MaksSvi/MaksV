#pragma once
#include "Ryadok.h"

class Cifry : public Ryadok {
public:
    Cifry(const std::string& value);
    int getLength() const override;
    void modify() override;
};
