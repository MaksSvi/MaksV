#pragma once
#include "Ryadok.h"

class Symvoly : public Ryadok {
public:
    Symvoly(const std::string& value);
    int getLength() const override;
    void modify() override;
};
