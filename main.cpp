#include <iostream>
#include <string>
#include <map>
#include <set>

void showWelcome(){
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    std::cout << "Добро пожаловать в игру Слова ! \n";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    std::cout << "Правила игры таковы! Вводите слова на последнюю букву предыдущего! \n"
}

int main() {
    showWelcome();
    return 0;
}