#include "Fake Wallet Miner.h"

int main() {
    system("cls");

    int a = std::stoi(gen_random_digits(3));

    for (int y = 1; y < a; y++) {
        std::cout << dye::aqua(" [") << dye::white("-") << dye::aqua("] ") << dye::white("bc1" + gen_random(45)) << dye::aqua(" -> ") << dye::white("0.00000 ") << dye::aqua("BTC") << std::endl;
        Sleep(30);
    }

    std::cout << dye::aqua(" [") << dye::white("+") << dye::aqua("] ") << dye::green("bc1" + gen_random(45)) << dye::aqua(" -> ") << dye::green("0") << dye::white(".") << dye::green(gen_random_digits(5)) << dye::aqua(" BTC") << std::endl;
    Sleep(3000);
    std::cout << std::endl << " Press Enter to send it to ur wallet";
    std::cin.get();
    std::string wallet;
    std::cout << std::endl << " Your " << dye::red("Wallet") << dye::white(": ");
    std::cin >> wallet;
    Sleep(2000);
    std::cout << std::endl << " Bitcoin Send " << dye::green("Successfully") << " to " << dye::green(wallet) << ".";
    Sleep(3000);

    return main();
}

std::string gen_random(const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    return tmp_s;
}

std::string gen_random_digits(const int len) {
    static const char alphanum[] =
        "0123456789";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    return tmp_s;
}