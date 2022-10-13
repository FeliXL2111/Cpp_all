#include <iostream>
#include <stdio.h>
#include <tuple>

using namespace std;

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
    string name = "Felix";
    int i;
    string hullo = "hullo \n";

    cout << "Hallo" + name + "\n";
    cin >> i;
    cout << "du hast " + to_string(i) + " eingegeben \n";

    cout << hullo;

    Tier felix;
    felix.postion_x = 1;
    felix.postion_y = 1;
    felix.laufen(3, 8);
    cout << felix.position();

    char* cmd = (char*) malloc(60);

    return 0;
}