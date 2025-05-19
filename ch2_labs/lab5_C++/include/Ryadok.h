#pragma once
#include <string>

class Ryadok {
protected:
    std::string text;

public:
    Ryadok(const std::string& value);
    virtual ~Ryadok() = default;

    std::string getText() const;
    virtual int getLength() const = 0;
    virtual void modify() = 0;
};
