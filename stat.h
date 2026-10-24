#ifndef STAT_H
#define STAT_H

#include "Word.h"
#include <map>

class Stat {
private:
    std::map<char, int> m_lettersCount;
public:
    void addWord(const Word& word);
    void clear();
    std::map<char, int> getData() const;
};
#endif
