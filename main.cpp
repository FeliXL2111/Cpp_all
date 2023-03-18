#include <iostream>
#include <stdio.h>
#include <tuple>


class Tier {
public:
    int postion_x;
    int postion_y;

    int laufen(int chan_x, int chan_y) {
        this->postion_x += chan_x;
        this->postion_y += chan_y;

        return 0;
    }

    int position() {
        return this->postion_x;
    }
};

int main() {
    char name[6] = "Felix";
    char i;
    char hullo[6] = "hullo";

    std::cout << "Hallo " << name << std::endl;
    std::cin >> i;
    std::cout << "du hast " << i << " eingegeben" << std::endl;

    std::cout << hullo << std::endl;

    Tier felix;
    felix.postion_x = 1;
    felix.postion_y = 1;
    felix.laufen(3, 8);
    std::cout << felix.position();

    char* cmd = (char*) malloc(60);

    return 0;
}