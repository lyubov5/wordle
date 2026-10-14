#ifndef WORD_H
#define WORD_H

#include <string>

class Word {
private:
    std::string m_text();
    void normalize();
public:
    Word();
    Word(const std::string& rawText);

    char getFirstLetter() const;
    char getLastLetter() const;
    std::string getText() const;
    bool isEmpty() const;
};
#endif
