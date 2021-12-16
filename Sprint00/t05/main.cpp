#include <iostream>

int main(int argc, char *argv[]) {
    if (5 != argc) {
        std::cerr << "usage:./automaton [name] [level] [health] [stamina]\n";
        return EXIT_FAILURE;
    }

    int i = 1;

    try {
        size_t x;
        auto si = std::stoi(std::string(argv[++i]), &x);
        if (argv[i][x] != '\0') throw argv[i];
        auto sf = std::stof(std::string(argv[++i]), &x);
        if (argv[i][x] != '\0') throw argv[i];
        auto sd = std::stod(std::string(argv[++i]), &x);
        if (argv[i][x] != '\0') throw argv[i];

        std::cout << "Name = " << argv[1] << "\nLevel = " << si << "\nHealth = " << sf << "\nStamina = " << sd << std::endl;
    }
    catch (...) {
        std::cerr << "Invalid argument: " << argv[i] << std::endl;
        return 1;
    }
    return 0;
}
