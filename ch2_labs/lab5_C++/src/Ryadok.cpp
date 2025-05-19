#include "Ryadok.h"

Ryadok::Ryadok(const std::string& value) : text(value) {}

std::string Ryadok::getText() const {
    return text;
}
