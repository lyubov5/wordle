#include "stat.h"

void Statistics::addWord(const Word& word) {
    if (!word.isEmpty()) {
        char first = word.getFirstLetter();
        m_letterCounts[first] = m_letterCounts[first] + 1;
    }
}

void Statistics::clear() {
    m_letterCounts.clear();
}

std::map<char, int> Statistics::getData() const {
    return m_letterCounts;
}