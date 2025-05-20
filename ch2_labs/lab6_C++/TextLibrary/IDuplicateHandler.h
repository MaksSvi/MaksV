#ifndef IDUPLICATEHANDLER_H
#define IDUPLICATEHANDLER_H

class IDuplicateHandler {
public:
    virtual void RemoveDuplicates() = 0;
    virtual ~IDuplicateHandler() = default;
};

#endif
