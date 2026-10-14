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

void showTurn(const std::string& playerName, char requiredLetter){
    std::cout << "\nХод игрока: " << playerName << "\n";
    std::cout << "Введите слово на букву \'" << requiredLetter << "\': ";
}

void showError(const std::string& error){
    std::cout << "Ошибка!!!!!!! " << error << "\n";
}

void showSuccess(const std::string& word) {
    std::cout << "Слово '" << word << "' принято!\n";
}

int main() {
    showWelcome();
    std::string startWord = getFirstWord();
    std::cout << "Вы ввели стартовое слово: " << startWord << "\n\n";
    std::cout << "Текущий игрок, введите слово: ";
    std::string playerWord = getNextWord();
    std::cout << "Вы ввели: " << playerWord << "\n";
    showTurn("Игрок 2", 'к');
    std::string word = getNextWord();
    showSuccess(word);
    showError("Это слово уже было использовано!");
    return 0;
}