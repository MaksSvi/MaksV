#include "Processor.h"

void processRyadok(Ryadok* r) {
    std::cout << "До змін: " << r->getText() << ", Довжина: " << r->getLength() << std::endl;
    r->modify();
    std::cout << "Після змін: " << r->getText() << ", Довжина: " << r->getLength() << std::endl;
}
