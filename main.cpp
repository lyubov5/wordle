#include <iostream>
#include <string>
#include <map>
#include <set>
#include <locale>
#include "Word.h"
#include "stat.h"

void showWelcome(){
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    std::cout << "Добро пожаловать в игру Слова ! \n";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    std::cout << "Правила игры таковы! Вводите слова на последнюю букву предыдущего! \n";
    std::cout << "(Для выхода из игры введите 'exit')\n\n";
}

void showTurn(int playerName, char requiredLetter){
    std::cout << "\nХод игрока: " << playerName << "\n";
    std::cout << "Введите слово на букву \'" << requiredLetter << "\': ";
}

void showError(const std::string& error){
    std::cout << "Ошибка!!!!!!! " << error << "\n";
}

void showSuccess(const std::string& word) {
    std::cout << "Слово '" << word << "' принято!\n";
}

void showStatistics(Stat& stat){
    std::cout << "\n~~~~~~~~~ Игра окончена ~~~~~~~~~~\n";
    std::cout << "Статистика введенных слов по первым буквам\n";
    std::map<char, int> data = stat.getData();
    if (data.empty()){
        std::cout << "Не было введено ни одного слова.\n";
    } else {
        for (const auto& pair : data){
            std::cout << "Буква'" << pair.first <<"':" << pair.second << "шт.\n";
        }
    }
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}


int main() {
    setlocale(LC_ALL, "Russian");

    showWelcome();

    std::set<std::string>> usedWords;

    Stat statistics;

    std::string input;
    std::cout << "Игрок 1б введите стартовое слово: ";
    std::cin >> input;

    Word currentWord(input);
    usedWords.insert(currentWord.getText());
    statistics.addWord(currentWord);

    int currentPlayer = 2;

    while (true) {
        char requiredLetter = currentWord.getLastLetter();
        showTurn(currentPlayer, requiredLetter);
        std::cin >> input;
        if (input == "exit" || input == "выход") {
            break;
            }
    
        Word newWord(input);

        if (newWord.isEmpty()) {
            showError("Пустое слово.");
            continue;
            }

        if (newWord.getFirstLetter() != requiredLetter) {
            showError("Слово должно начинаться на букву '" + std::string(1, requiredLetter) + "'.");
            continue;
            }

        if (usedWords.count(newWord.getText()) > 0) {
            showError("Это слово уже было использовано!");
            continue;
            }

        showSuccess(newWord.getText());
        usedWords.insert(newWord.getText());
        currentWord = newWord;
        statistics.addWord(newWord);
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }
    showStatistics(statistics);
    return 0;
}