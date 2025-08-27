#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));                  // Seed random number
    int num = rand() % 10 + 1;       // Random number between 1 and 10
    int g;

    do {
        cout << "Guess the number (1 to 10): ";
        cin >> g;

        if (g > num) {
            cout << "Too high! Try again.\n";
        } else if (g < num) {
            cout << "Too low! Try again.\n";
        }
    } while (g != num);

    cout << "?? Congratulations! You guessed the number.\n";
    return 0;   // Success exit code
}
