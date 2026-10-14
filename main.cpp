#include <iostream>
#include <string>
#include <map>
#include <set>

void showWelcome(){
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    std::cout << "Добро пожаловать в игру Слова ! \n";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    std::cout << "Правила игры таковы! Вводите слова на последнюю букву предыдущего! \n";
}

std::string getFirstWord(){
    std::string word;
    std::cout << "Игрок 1, введите стартовое слово: ";
    std::cin >> word;
    return word;
}

std::string getNextWord(){
    std::string word;
    std::cin >> word;
    return word;
}

int main() {
    showWelcome();
    std::string firstWord = getFirstWord();
    std::cout << "Вы введите первое слово" << firstWord << "\n\n";
    std::cout << "Текущий игрок, введите слово:";
    std::string playerWord = getNextWord();
    std::cout << "Вы ввели слово" << playerWord << "\n";
    return 0;
}