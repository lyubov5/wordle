#include "stat.h"

void Stat::addWord(const Word& word) {
    if (!word.isEmpty()) {
        char first = word.getFirstLetter();
        m_lettersCount[first] = m_lettersCount[first] + 1;
    }
}

void Stat::clear() {
    m_lettersCount.clear();
}

std::map<char, int> Stat::getData() const {
    return m_lettersCount;
}