#include "Word.h"
#include <cctype>

void Word::normalize() {
    for(int i=0; i<m_text.size(); i++) {
        m_text[i]=std::tolower(m_text[i]);
    }
}
Word::Word() {
    m_text="";
}

Word::Word(const std::string& rawText) {
    m_text=rawText;
    normalize();
}

char Word::getFirtsLatter() const {
    if (m_text.empty()) return '\0';
    return m_text[0];
}


char Word::getLastLatter() const {
    if (m_text.empty()) return '\0';
    return m_text[m_text.size()-1];
}

std::string Word::getText const {
    return m_text;
}

bool Word::isEmpty() const {
    return m_text.empty();
}
