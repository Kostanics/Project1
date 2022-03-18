#include <iostream>
using namespace std;

int main()
{
    int random[100]{};
    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        random[i] = rand() % 10;
    }
    cout << "massive:";
    for (int i = 0; i < 100; i++) {
        cout << random[i];
    }
    cout << endl;
    int x = 0;
    for (int j = 0; j < 100 - 1; j++) {
        for (int k = 100 - 1; k > j; k--) {
            if (random[k] < random[k - 1]) {
                x = random[k - 1];
                random[k - 1] = random[k];
                random[k] = x;
            }
        }
    }
    cout << "sort massive";
    for (int i = 0; i < 100; i++) {
        cout << random[i];
    }
}